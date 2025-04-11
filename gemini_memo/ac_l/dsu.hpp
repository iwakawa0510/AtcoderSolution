//This header file defines the elementary set data structure and the structures for its behavior. Can you please add the specific logic of this in a comment out?
//Gemini chat response:

#ifndef ATCODER_DSU_HPP
#define ATCODER_DSU_HPP 1

#include <algorithm> // For std::swap
#include <cassert>   // For assert()
#include <vector>    // For std::vector

namespace atcoder {

// Implement (union by size) + (path compression)
// Reference:
// Zvi Galil and Giuseppe F. Italiano,
// Data structures and algorithms for disjoint set union problems

// The dsu struct (Disjoint Set Union, also known as Union-Find) manages a collection
// of disjoint sets. It provides efficient operations to merge sets and to determine
// if two elements belong to the same set.
struct dsu {
  public:
    // Default constructor: initializes an empty DSU structure.
    dsu() : _n(0) {}
    // Constructor: initializes a DSU structure with 'n' elements.
    // Each element initially belongs to its own set.
    // The parent_or_size vector stores information about the sets.
    // A negative value -s at index i means i is a root and its set size is s.
    // A non-negative value p at index i means i is not a root and its parent is p.
    explicit dsu(int n) : _n(n), parent_or_size(n, -1) {}

    // Merges the sets containing elements 'a' and 'b'.
    // Returns the leader (representative element) of the merged set.
    // If 'a' and 'b' are already in the same set, it does nothing and returns their leader.
    int merge(int a, int b) {
        // Assert that the indices are within the valid range [0, _n).
        assert(0 <= a && a < _n);
        assert(0 <= b && b < _n);
        // Find the leaders (roots) of the sets containing 'a' and 'b'.
        // The leader function also performs path compression.
        int x = leader(a), y = leader(b);
        // If 'a' and 'b' already have the same leader, they are in the same set.
        if (x == y) return x;
        // Union by Size: Attach the smaller tree to the root of the larger tree.
        // This heuristic helps keep the tree depth low, improving efficiency.
        // We compare the absolute values of parent_or_size (which represent sizes for roots).
        if (-parent_or_size[x] < -parent_or_size[y]) std::swap(x, y);
        // Merge the smaller set (led by y) into the larger set (led by x).
        // Update the size of the larger set by adding the size of the smaller set.
        parent_or_size[x] += parent_or_size[y];
        // Make the leader of the smaller set 'y' point to the leader of the larger set 'x'.
        parent_or_size[y] = x;
        // Return the leader of the new merged set.
        return x;
    }

    // Checks if elements 'a' and 'b' belong to the same set.
    // Returns true if they are in the same set, false otherwise.
    bool same(int a, int b) {
        // Assert that the indices are within the valid range [0, _n).
        assert(0 <= a && a < _n);
        assert(0 <= b && b < _n);
        // Two elements are in the same set if and only if their leaders are the same.
        // The leader function also performs path compression.
        return leader(a) == leader(b);
    }

    // Finds the leader (representative element) of the set containing element 'a'.
    // Implements Path Compression: During the traversal up to the root,
    // it makes each visited node point directly to the root.
    // This significantly speeds up future operations on elements in this path.
    int leader(int a) {
        // Assert that the index is within the valid range [0, _n).
        assert(0 <= a && a < _n);
        // If parent_or_size[a] is negative, 'a' is the root (leader) of its set.
        if (parent_or_size[a] < 0) return a;
        // Otherwise, 'a' is not a root. Recursively find the leader of its parent.
        // Path Compression: Set the parent of 'a' directly to the leader found.
        return parent_or_size[a] = leader(parent_or_size[a]);
    }

    // Returns the size of the set containing element 'a'.
    int size(int a) {
        // Assert that the index is within the valid range [0, _n).
        assert(0 <= a && a < _n);
        // Find the leader of the set containing 'a'.
        // The size is stored as a negative value at the leader node.
        // Negate the value to get the actual size.
        return -parent_or_size[leader(a)];
    }

    // Returns a list of all disjoint sets (groups).
    // Each group is represented as a vector of its member elements.
    std::vector<std::vector<int>> groups() {
        // leader_buf[i] will store the leader of element i.
        // group_size[i] will store the size of the group whose leader is i.
        std::vector<int> leader_buf(_n), group_size(_n);
        // First pass: Find the leader for each element and calculate group sizes.
        for (int i = 0; i < _n; i++) {
            leader_buf[i] = leader(i); // Find leader (applies path compression)
            group_size[leader_buf[i]]++; // Increment size count for the leader
        }
        // Initialize the result vector. We create _n potential slots, one for each possible leader.
        std::vector<std::vector<int>> result(_n);
        // Reserve memory for each group vector to avoid reallocations.
        for (int i = 0; i < _n; i++) {
            result[i].reserve(group_size[i]);
        }
        // Second pass: Populate the group vectors.
        for (int i = 0; i < _n; i++) {
            result[leader_buf[i]].push_back(i); // Add element i to the vector of its leader
        }
        // Remove empty vectors (corresponding to indices that are not leaders of any group).
        // This uses the erase-remove idiom.
        result.erase(
            std::remove_if(result.begin(), result.end(),
                           [&](const std::vector<int>& v) { return v.empty(); }),
            result.end());
        // Return the vector of groups.
        return result;
    }

  private:
    // Number of elements managed by the DSU structure.
    int _n;
    // The core data structure. Stores parent pointers or negative set sizes.
    // - If parent_or_size[i] < 0, then 'i' is a root node,
    //   and -parent_or_size[i] is the size of the set rooted at 'i'.
    // - If parent_or_size[i] >= 0, then parent_or_size[i] is the index
    //   of the parent of node 'i'.
    std::vector<int> parent_or_size;
};

}  // namespace atcoder

#endif  // ATCODER_DSU_HPP

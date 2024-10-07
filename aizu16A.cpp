#include <iostream>

int main() {
  int n;
  std::cin >> n;

  const int MAX_A = 1000000;
  const int MIN_A = -1000000;

  int max = MIN_A, min = MAX_A;
  long long sum = 0;
  for (int i = 0; i < n; i++) {
    int a;
    std::cin >> a;

    if (max < a) {
      max = a;
    }

    if (a < min) {
      min = a;
    }

    sum += a;
  }

  std::cout << min << " " << max << " " << sum << std::endl;
  
return 0;
}
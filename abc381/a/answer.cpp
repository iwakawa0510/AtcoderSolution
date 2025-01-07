#include <iostream>
#include <string>
using namespace std;
void No() {
  cout << "No" << "\n";
  exit(0);
}
int main() {
  int N;
  string S;
  cin >> N >> S;
  if (N % 2 == 0) No();
  for (int i = 0; i < (N + 1) / 2 - 1; i++) {
    if (S[i] != '1') No();
  }
  if (S[(N + 1) / 2 - 1] != '/') No();
  for (int i = (N + 1) / 2; i < N; i++) {
    if (S[i] != '2') No();
  }
  cout << "Yes" << "\n";
}
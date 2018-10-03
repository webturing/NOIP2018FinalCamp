#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000;
int power(int a, int b) {
  a %= MOD;
  if (a == 0 || b == 1) return a;
  if (a == 1 || b == 0) return 1;
  if (b % 2 == 0) return power(a * a % MOD, b / 2);
  return power(a * a % MOD, b / 2) * a % MOD;
}
int main() {
  ifstream cin("B.in");
  int a, b;
  while (cin >> a >> b) {
    cout << setw(3) << setfill('0') << power(a, b) << endl;
  }
  return 0;
}
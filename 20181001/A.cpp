#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;
  while (N--) {
    int m;
    cin >> m;
    cout << (1LL * m * (m + 1) * (m + 2)) / 6 << endl;
  }
  return 0;
}
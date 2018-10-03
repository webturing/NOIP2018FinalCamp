#include <bits/stdc++.h>
using namespace std;
int main() {
  ifstream cin("A.in");
  int T;
  cin >> T;
  while (T--) {
    int m;
    cin >> m;
    vector<int> a(m), b(m);
    for (int i = 0; i < m; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    long long sum = 0;
    for (int i = 0; i < m; i++) sum += a[i] * b[m - 1 - i];
    cout << sum << endl;
  }
  return 0;
}
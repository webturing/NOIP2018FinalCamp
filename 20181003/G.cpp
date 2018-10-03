#include <bits/stdc++.h>
using namespace std;

int main() {
  ifstream cin("G.in");
  int T;
  cin >> T;
  while (T--) {
    int m;
    cin >> m;
    vector<int> v(m);
    for (int i = 0; i < m; i++) {
      cin >> v[i];
    }
    vector<int> S(m + 1, 0);
    S[0] = 0;
    for (int i = 0; i < m; i++) {
      S[i + 1] = S[i] + v[i];
    }
    int Max = 0;
    for (int i = 0; i < m; i++)
      for (int j = i; j < m; j++) {
        Max = max(Max, S[j + 1] - S[i]);
      }
    cout << Max << endl;
  }

  return 0;
}
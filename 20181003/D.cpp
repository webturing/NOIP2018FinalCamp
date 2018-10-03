#include <bits/stdc++.h>
using namespace std;
struct A {
  int start, end;
  bool operator<(const A& b) const { return this->end < b.end; }
};

int main() {
  ifstream cin("D.in");
  int n;
  cin >> n;
  vector<A> v(n);
  for (int i = 0; i < n; i++) cin >> v[i].start >> v[i].end;
  sort(v.begin(), v.end());
  int tot = 0, start = 0;
  for (int i = 0; i < n; i++) {
    if (v[i].start >= start) {
      ++tot;
      start = v[i].end;
    }
  }
  cout << tot << endl;

  return 0;
}

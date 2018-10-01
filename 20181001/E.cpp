#include <bits/stdc++.h>
using namespace std;
struct Brick {
  int width, height;
};
int main() {
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    vector<Brick> v(n);
    for (int i = 0; i < n; ++i) {
      cin >> v[i].width >> v[i].height;
    }
    int y;
    cin >> y;
    int best = INT_MAX;
    for (int i = 0; i < n; i++) {
      if (v[i].height >= best) continue;
      int left = 0, right = 0;
      for (int j = i; j < n; j++) {
        if (v[j].height > v[i].height) break;
        right += v[j].width;
      }
      for (int j = i; j >= 0; j--) {
        if (v[j].height > v[i].height) break;
        left += v[j].width;
      }
      if (left >= y || right >= y) {
        best = min(best, v[i].height);
      }
    }
    cout << best + y << endl;
  }
  return 0;
}
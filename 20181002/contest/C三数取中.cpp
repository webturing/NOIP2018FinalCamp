#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, c;
  while (cin >> a >> b >> c) {
    int d[] = {a, b, c};
    sort(d, d + 3);
    cout << d[1] << endl;
  }
  return 0;
}
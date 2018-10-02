#include <bits/stdc++.h>
using namespace std;

int main() {
  ifstream cin("C.in");
  int a, b, c;
  while (cin >> a >> b >> c) {
    int Max = max(a, max(b, c));
    int Min = min(a, min(b, c));
    cout << a + b + c - Max - Min << endl;
  }
  return 0;
}
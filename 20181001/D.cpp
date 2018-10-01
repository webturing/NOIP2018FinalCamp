#include <bits/stdc++.h>
using namespace std;
bool ok(string str) {
  if (str.length() < 1 || str.length() % 2 != 0) return false;
  string str2(str.rbegin(), str.rend());
  return str == str2;
}
int main() {
  ifstream cin("D.in");
  int T;
  cin >> T;
  while (T--) {
    string str;
    cin >> str;
    while (ok(str)) {
      str = str.substr(0, str.length() / 2);
    }
    cout << str.length() << endl;
  }
  return 0;
}
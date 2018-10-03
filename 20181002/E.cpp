#include <bits/stdc++.h>
using namespace std;

int main() {
  ifstream cin("E.in");
  string str;
  while (cin >> str) {
    stack<char> S;
    size_t Max = 0;
    for (size_t i = 0; i < str.length(); i++) {
      if (str[i] == '(') {
        S.push(str[i]);
        Max = max(S.size(), Max);
      } else {
        S.pop();
      }
    }
    cout << Max << endl;
  }
  return 0;
}
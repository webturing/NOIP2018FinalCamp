#include <bits/stdc++.h>
using namespace std;
int str2int(const string& s) {
  istringstream iss(s);
  int t;
  iss >> t;
  return t;
}
bool cmp(const string& a, const string& b) {
  int ia = str2int(a.substr(6, 8));
  int ib = str2int(b.substr(6, 8));
  return ia > ib;
}
int main() {
  ifstream cin("D.in");
  ofstream cout("D.out");
  int n;
  cin >> n;
  vector<string> S(n);
  for (size_t i = 0; i < S.size(); i++) cin >> S[i];
  sort(S.begin(), S.end(), cmp);
  for (size_t i = 0; i < S.size(); i++) {
    cout << S[i] << endl;
  }
  return 0;
}
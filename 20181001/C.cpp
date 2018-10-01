#include <bits/stdc++.h>
using namespace std;
struct Pipe {
  int length;
  int diameter;
  int number;
  bool operator<(const Pipe &other) {
    if (length != other.length) return length > other.length;
    if (diameter != other.diameter) return diameter < other.diameter;
    return number > other.number;
  }
};
int main() {
  int N;
  cin >> N;
  while (N--) {
    int m;
    cin >> m;
    vector<Pipe> v(m);
    for (int i = 0; i < m; i++) {
      cin >> v[i].length >> v[i].diameter >> v[i].number;
    }
    cout << min_element(v.begin(), v.end())->number << endl;
  }
  return 0;
}
#include <iostream>
using namespace std;
int get(char ch) {
  int ret = 0;
  switch (ch) {
    case 'H':
      ret = 1;
      break;
    case 'C':
      ret = 12;
      break;
    case 'N':
      ret = 14;
      break;
    case 'O':
      ret = 16;
      break;
    case 'F':
      ret = 19;
      break;
    case 'P':
      ret = 31;
      break;
    case 'S':
      ret = 32;
      break;
    case 'K':
      ret = 39;
      break;
  }
  return ret;
}
int main() {

  int n;
  cin >> n;
  while (n--) {
    string str;
    cin >> str;
    int sum = 0;
    for (int i = 0; i < str.size(); i++) {
      if (isalpha(str[i])) {
        int k = 1;
        if (i + 1 < str.size() && isdigit(str[i + 1])) {
          k = str[i + 1] - '0';
        }
        sum += get(str[i]) * k;
      }
    }
    cout << sum << endl;
  }
  return 0;
}

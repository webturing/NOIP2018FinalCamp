#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    string s;
    getline(cin,s);
   istringstream iss(s);
   iss>>x;

    while (x--){
    string s,s2;
    getline(cin,s);
    if (s[0]!=' ') s2.push_back(toupper(s[0]));
    for (int i=1;i<s.length();i++)
      if (s[i-1]==' '&&s[i]!=' ') s2.push_back(toupper(s[i]));  
    cout<<s2<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
int main() {
	int x;
	string s;
	getline(cin,s);
	istringstream iss(s);
	iss>>x;

	while (x--) {
		string s,s2;
		getline(cin,s);
		istringstream iss(s);
		string t;
		while(iss>>t) {
			s2.push_back(toupper(t[0]));
		}
		reverse(s2.begin(),s2.end());
		cout<<s2<<endl;
	}


}

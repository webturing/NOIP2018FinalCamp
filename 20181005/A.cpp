#include<bits/stdc++.h>
using namespace std;
int main() {
	int a,b;
	while(cin>>a>>b) {
		a%=10;
		b=b%4+4;
		int s=1;
		while(b--) {
			s*=a;
		}
		cout<<s%10<<endl;
	}
	return 0;
}

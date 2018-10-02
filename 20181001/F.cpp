#include<iostream>
using namespace std;
typedef long long LL;
LL gcd(LL a,LL b){
	return b==0?a:gcd(b,a%b);
}
LL lcm(LL a,LL b){
	return a/gcd(a,b)*b;
}
int main()
{
	int n=100;
	LL s=1;
	for(int i=2;i<=n;i++){
		s=lcm(s,i);
	}
	cout<<s<<endl;
}

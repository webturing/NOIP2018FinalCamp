#include<bits/stdc++.h>
using namespace std;
const int MOD=1000000007;

int main() {
	int n;
	cin>>n;
	vector<int> F(n+1);
	F[1]=F[2]=1;
	F[3]=2;
	for(int i=4;i<=n;i++)
	F[i]=(F[i-1]+F[i-3])%MOD;
	cout<<F[n]<<endl;
	return 0;
}

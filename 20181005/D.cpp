#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int B[5]= {1,2,4,5,10};
	vector<int> F(n+1);
	for(int i=0; i<=n; i++)F[i]=i;
	for(int i=0; i<5; i++)F[B[i]]=1;
	for(int i=3; i<=n; i++) {
		int m=INT_MAX;
		for(int j=0; j<5; j++) {
			if(i<B[j])continue;
			m=min(F[i-B[j]]+1,m);
		}
		F[i]=m;
	}
	cout<<F[n]<<endl;

	return 0;
}

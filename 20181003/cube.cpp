#include<bits/stdc++.h>
using namespace std;

int main() {
	ifstream cin("G.in");
	int T;
	cin>>T;
	while(T--) {
		int m;
		cin>>m;
		vector<int> v(m);
		for(int i=0; i<m; i++)cin>>v[i];
		int Max=0;
		for(int i=0; i<m; i++) {
			for(int j=i; j<m; j++) {
				int tot=0;
				for(int k=i; k<=j; k++) {
					tot+=v[k];
				}
				Max=max(Max,tot);
			}

		}
		cout<<Max<<endl;
	}
	return 0;
}

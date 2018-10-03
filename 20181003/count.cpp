#include<bits/stdc++.h>
using namespace std;

int main() {
	int a[]= {1,3,5,7,9,2,4,6,8,123,12,3,123,12,3,100023,3,0};
	int n=sizeof(a)/sizeof(a[0]);
	map<int,int> M;
	for(int i=0;i<n;i++){//nlogn  n^2
		M[a[i]]++;
	}
	int ans=0,Max=0;
//	for(int i=0;i<n;i++){
//		if(M[a[i]]>Max){
//			ans=a[i];
//			Max=M[a[i]];
//		}
//	}
for(map<int,int>::iterator it=M.begin();it!=M.end();++it){
	if(it->second>Max){
		ans=it->first;
		Max=it->second;
	}
}
	cout<<ans<<" "<<Max<<endl;
	return 0;
}

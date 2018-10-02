#include<bits/stdc++.h>
using namespace std;

int main() {
	map<int,int> M;
	M[123]++;
	M[456]++;
	M[23]++;
	M[123]++;
	
	cout<<M[123]<<endl;
	
	//traverse
	
	for(map<int,int>::iterator it=M.begin();it!=M.end();++it)
	{
		cout<<it->first<<" "<<it->second<<endl;
	}
	return 0;
}

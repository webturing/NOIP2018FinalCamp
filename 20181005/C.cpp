#include <bits/stdc++.h>
using namespace std;
struct Stu {
	int id;
	int x,y,z;
	int total;
	bool operator<(const Stu&that)const {
		if(total-that.total) return total>that.total;
		if(x-that.x)return x>that.x;
		return id<that.id;
	}
};
int main() {
	int n;
	cin>>n;
	vector<Stu> S(n);
	for(int i=0; i<n; i++) {
		S[i].id=i+1;
		cin>>S[i].x>>S[i].y>>S[i].z;
		S[i].total=S[i].x+S[i].y+S[i].z;
	}
	sort(S.begin(),S.end());
	for(int i=0; i<5&&i<n; i++)
		cout<<S[i].id<<" "<<S[i].total<<endl;
	return 0;
}


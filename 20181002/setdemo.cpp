#include<bits/stdc++.h>
using namespace std;
void disp(set<int>& s) {
	for(set<int>::iterator it=s.begin();it!=s.end();++it)
	cout<<*it<<" ";
	cout<<endl;
}
int main() {
	set<int> s;
	disp(s);
	for(int i=0;i<10;i++){
		s.insert((i*i)%10);
		disp(s);
	}
	set<int>::iterator pos=s.find(4);
	if(pos==s.end()){
		cout<<"no found!"<<endl;
	}else
	{
		cout<<"find"<<endl;
	}
	return 0;
}

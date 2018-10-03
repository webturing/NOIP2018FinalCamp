#include<bits/stdc++.h>
using namespace std;
void disp(list<int>& v1){
		for(list<int>::iterator it=v1.begin();it!=v1.end();++it)
		cout<<*it<<" ";
	cout<<endl; 
}
int main()
{
	list<int> v1;
	for(int i=0;i<10;i++)v1.push_back(i);
	cout<<v1.size()<<endl;

	disp(v1);
	v1.resize(7);//
	disp(v1);
	v1.erase(v1.begin());
	disp(v1);
	v1.push_front(123);
	disp(v1);
	return 0;
}

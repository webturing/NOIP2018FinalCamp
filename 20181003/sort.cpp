#include<bits/stdc++.h>
using namespace std;
bool Dec(int a,int b){
	return a>b;
}
bool Inc(int a,int b){
	return a<b;
}
int main()
{
	int a[]={1,3,5,7,9,2,4,6,8,0};
	int n=sizeof(a)/sizeof(int);
	sort(a,a+n,Inc);
	copy(a,a+n,ostream_iterator<int>(cout," "));cout<<endl;
	reverse(a,a+n);
	copy(a,a+n,ostream_iterator<int>(cout," "));cout<<endl;
	
	sort(a,a+n,Dec);
	copy(a,a+n,ostream_iterator<int>(cout," "));cout<<endl;
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{	
	int x=2;
	cout<<(x^5)<<endl;//不是幂运算符
	cout<<x*x*x*x*x<<endl; 
	x=100;
	cout<<x*x*x*x*x<<endl;//溢出
	cout<<1LL*x*x*x*x*x<<endl; //正确 
	
}

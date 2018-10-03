#include<bits/stdc++.h>
using namespace std;
int main()
{
	for(int i=0;i<(1<<4);i++)
	{
		int a=i%2;
		int b=(i/2)%2;
		int c=(i/2/2)%2;
		int d=(i/2/2/2)%2;
    	cout<<a<<b<<c<<d<<endl;
	}
				
}

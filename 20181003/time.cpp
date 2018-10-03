#include<bits/stdc++.h>
using namespace std;
void myprog(){
	int s=0;

	for(int i=1;i<=100000000;i++)
		s+=i;
//	cout<<s<<endl;
} 
int main()
{	
	long long start=clock();//#include<ctime>
	myprog();
	long long end=clock();
	cout<<(end-start)/1000.0<<endl;
	
	return 0;
	
}

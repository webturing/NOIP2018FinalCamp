#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N =100;
LL h[101];
void fill(){
	for(int i=1;i<=N;i++){
		h[i]=1LL*i*i*i*i*i;
	}
}
void myprog() {//
	fill();
	for(int a=1;a<=N;a++)
	for(int b=a;b<=N;b++)
	for(int c=b;c<=N;c++)
	for(int d=c;d<=N;d++)
	for(int e=d;e<=N;e++)
{
	//在有序数组H 中二分查找h[a]+h[b]+h[c]+h[d]+h[e] 
	bool flag=binary_search(h,h+101,h[a]+h[b]+h[c]+h[d]+h[e]);
		if(flag){
			cout<<a<<"^5+"<<b<<"^5+"<<c<<"^5+"<<d<<"^5+"<<e<<"^5"<<endl;
		}
	}
}
int main() {
	
	LL start=clock();//#include<ctime>
	myprog();
	LL end=clock();
	cout<<(end-start)/1000.0<<endl;

	return 0;

}

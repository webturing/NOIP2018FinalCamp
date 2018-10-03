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
void myprog() {//using array save h[x]
	fill();
	for(int a=1;a<=N;a++)
	for(int b=a;b<=N;b++)
	for(int c=b;c<=N;c++)
	for(int d=c;d<=N;d++)
	for(int e=d;e<=N;e++)
	for(int f=e+1;f<=N;f++){
		if(h[a]+h[b]+h[c]+h[d]+h[e]==h[f]){
			cout<<a<<"^5+"<<b<<"^5+"<<c<<"^5+"<<d<<"^5+"<<e<<"^5="<<f<<"^5"<<endl;
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

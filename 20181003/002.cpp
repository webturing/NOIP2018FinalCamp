#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N =100;

inline LL h(int x) {
	return 1LL*x*x*x*x*x;
}
void myprog() {//using 1<=a<=b<=c<=d<=e<f<=N
	for(int a=1;a<=N;a++)
	for(int b=a;b<=N;b++)
	for(int c=b;c<=N;c++)
	for(int d=c;d<=N;d++)
	for(int e=d;e<=N;e++)
	for(int f=e+1;f<=N;f++){
		if(h(a)+h(b)+h(c)+h(d)+h(e)==h(f)){
			cout<<a<<"^5+"<<b<<"^5+"<<c<<"^5+"<<d<<"^5+"<<e<<"^5="<<f<<"^5"<<endl;
		}
	}
}
int main() {
	cout<<h(100)<<endl;
	LL start=clock();//#include<ctime>
	myprog();
	LL end=clock();
	cout<<(end-start)/1000.0<<endl;

	return 0;

}

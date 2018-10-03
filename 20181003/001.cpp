#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N =100;

inline LL h(int x) {
	return 1LL*x*x*x*x*x;
}
void myprog() {//brute failed
	for(int a=1;a<=N;a++)
	for(int b=1;b<=N;b++)
	for(int c=1;c<=N;c++)
	for(int d=1;d<=N;d++)
	for(int e=1;e<=N;e++)
	for(int f=1;f<=N;f++){
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

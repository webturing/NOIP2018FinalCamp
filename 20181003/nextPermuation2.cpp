#include<bits/stdc++.h>
using namespace std;
int main() {
	int a[]= {1,2,3,4};
	do {
		cout<<a[0]<<a[1]<<a[2]<<a[3]<<endl;
	} while(next_permutation(a,a+4));
	return 0;
}

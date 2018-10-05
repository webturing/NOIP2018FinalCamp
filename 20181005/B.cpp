#include <bits/stdc++.h>
using namespace std;

const int N=100;
int main() {
	stack<double> S;
	for(string tok; cin>>tok;) {
		istringstream iss(tok);
		double x;
		if(iss>>x) {
			S.push(x);
		} else {
			double b=S.top();
			S.pop();
			double a=S.top();
			S.pop();
			if(tok=="+")S.push(a+b);
			else if(tok=="-")S.push(a-b);
			else if(tok=="*")S.push(a*b);
			else S.push(a/b);
		}
	}
	cout<<fixed<<setprecision(2)<<S.top()<<endl;
	return 0;
}


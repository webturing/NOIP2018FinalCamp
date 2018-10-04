//
// Created by jal on 18-10-4.
//


#include <bits/stdc++.h>
using namespace std;
int T[10]={1,10,100,1000,10000,100000};

int main(){
    ofstream cout("B.out");
    int n;
    cin >> n;

    int n1 = (n+1)/2;

    for(int i = T[n1-1]; i < T[n1]; i++){
        ostringstream oss;
        oss<<i;
        string s(oss.str());
        cout << s;

        reverse(s.begin(), s.end());
        if (n%2==1)
            s.erase(s.begin());
        cout << s<<endl;
    }

}
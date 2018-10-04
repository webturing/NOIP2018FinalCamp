//
// Created by jal on 18-10-4.
//

#include <bits/stdc++.h>
using namespace std;
const int N = 51;
long long F[N]={0};
long long f(int n){
    if(F[n] != 0)return F[n];
    if(n == 1)return F[1] = 1;
    if(n == 2)return F[2] = 1;
    return F[n] = f(n-1)+f(n-2);
}
int main(){
    ofstream cout("E.out");
    int n;
    cin >> n;
    cout << f(n)<<endl;
}
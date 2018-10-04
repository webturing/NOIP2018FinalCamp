//
// Created by jal on 18-10-4.
//

#include <bits/stdc++.h>
using namespace std;
int main(){
//    ifstream cin("D.in");
//    ofstream cout("D.out");
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int a[n+1][n+1];
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= i; j++){
                cin >> a[i][j];
            }
        }
        int sum[n+1][n+1]={0};
        sum[1][1] = a[1][1];
        for(int i = 2; i <= n; i++){
            sum[i][1] = sum[i-1][1]+a[i][1];
            for(int j = 2; j < i; j++){
                sum[i][j] = max(sum[i-1][j] , sum[i-1][j-1]) + a[i][j];
            }
            sum[i][i] = sum[i-1][i-1] + a[i][i];
        }
        cout<< *max_element(sum[n]+1, sum[n]+n+1)<<endl;
    }
}
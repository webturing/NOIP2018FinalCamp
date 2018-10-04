//
// Created by jal on 18-10-4.
//

#include <bits/stdc++.h>
using namespace std;
int main(){
    ofstream cout("A.out");
    int n;
    while(cin>>n){
        int sum[n+1] = {0};
        for(int i = 1; i <= n; i++){
            sum[i] = sum[i-1]+i;
        }
        for(int i = 1; i < n; i++){
            int x = sum[i-1]+n;
            if(binary_search(sum+i, sum+n+1, x)){
                cout << i << " " << lower_bound(sum+i, sum+n+1, x) - sum<<endl;
            }
        }
    }
}

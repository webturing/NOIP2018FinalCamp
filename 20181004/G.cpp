//
// Created by jal on 18-10-4.
//

#include <bits/stdc++.h>
using namespace std;
int main(){
    ofstream cout("G.out");
    int n;
    cin >> n;
    double a[n];
    for(int i = 0; i < n; i++){
        double x,y;
        cin >> x >> y;
        a[n] = y/x;
    }
    sort(a,a+n);
    int cnt = 1;
    int best = cnt;
    for(int i = 1; i < n; i++){
        if(abs(a[i] - a[i-1]) < 0.00001){
            cnt++;
            if(cnt > best){
                best = cnt;
            }
        }
        else{
            cnt = 1;
        }
    }
    cout << best << endl;
}
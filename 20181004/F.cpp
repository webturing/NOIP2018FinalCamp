//
// Created by jal on 18-10-4.
//
#include <bits/stdc++.h>
using namespace std;
const int N = 100;
int F[N];

int Find(int x){
    return x == F[x] ? x : Find(F[x]);
}
void Merge(int x,int y){
    int rx = Find(x);
    int ry = Find(y);
    if(rx != ry){
        F[rx] = ry;
    }
}
int main(){
//    ifstream cin("F.in");
    ofstream cout("F.out");
    int n, m;
    while(cin >> n >> m) {
        for (int i = 1; i <= n; i++) {
            F[i] = i;
        }
        for (int i = 1; i <= m; i++) {
            int x, y;
            cin >> x >> y;
            Merge(x, y);
        }

        int sum = 0;
        for (int i = 1; i <= n; i++) {
            if (F[i] == i) {
                sum++;
            }
        }
        cout << sum << endl;
    }
}

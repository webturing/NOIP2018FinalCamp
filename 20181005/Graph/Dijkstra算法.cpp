//
// Created by jal on 18-10-5.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    //ifstream cin("input.txt");
    int n,m;
    cin >> n >> m;
    int a[n+1][n+1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == j)a[i][j] = 0;
            else
            a[i][j] = INT_MAX;
        }
    }
    for(int i = 1; i <= m; i++){


        int x,y,z;
        cin >> x >> y >> z;
        a[x][y]  = z;
    }
    int dis[n+1];
    int book[n+1]={0};
    for(int i = 1; i <= n; i++){
        dis[i] = a[1][i];
    }
    book[1] = 1;
    for(int i = 1; i < n; i++){
        int Min = INT_MAX;
        int u;
        for(int j = 1; j <= n; j++){
            if(book[j] == 0 && Min > dis[j]){
                Min = dis[j];
                u = j;
            }
        }
        book[u] = 1;
        for(int j = 1; j <= n; j++){
            if(a[u][j] < INT_MAX && dis[j] > dis[u] + a[u][j]){
                dis[j] = dis[u]+a[u][j];
            }
        }
    }
    for(int i = 1; i <= n; i++){
        cout << dis[i] << " ";
    }
    cout << endl;
}

/*
 * input:
6 9
 1 2 1
 1 3 12
 2 3 9
 2 4 3
 3 5 5
 4 3 4
 4 5 13
 4 6 15
 5 6 4

 output:
 0 1 8 4 13 17
 */
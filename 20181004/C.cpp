//
// Created by jal on 18-10-4.
//

#include <bits/stdc++.h>
using namespace std;
const int N = 100;
char a[N+2][N+2];
int n,m;
int dir[4][2] = {1,0,-1,0,0,1,0,-1};
void dfs(int x,int y){
    a[x][y] = '#';
    for(int k = 0; k <= 3;k ++){
        int tx = x + dir[k][0];
        int ty = y + dir[k][1];
        if(tx >= n+2 || ty >= m+2 || tx < 0 || ty < 0 || a[tx][ty] =='#'){
            continue;
        }
        dfs(tx,ty);
    }
}
int main(){
    ofstream cout("C.out");
    int T;
    cin >> T;
    int t=0;
    while (T--){
        cin >> n >> m;
        for(int i = 0; i <= n+1; i ++){
            for(int j = 0; j <= m+1; j++){
                a[i][j]='.';
            }
        }
        for(int i = 1; i <= n; i++){
            scanf("%s",a[i]+1);
        }
        dfs(0,0);

        int sum = 0;
        for(int i = 0; i <= n+1; i++){
            for(int j = 0; j <= m+1; j++){
                if(a[i][j]=='#'){
                    sum++;
                }
            }
        }
        cout << "Case "<<++t<<": ";

        if(sum == (n+2)*(m+2)){
            cout << "H"<<endl;
        }
        else{
            cout << "A"<<endl;
        }
    }
}
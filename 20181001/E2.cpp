//
// Created by jal on 18-10-1.
//

#include <bits/stdc++.h>
using namespace std;
struct Z{
    int width,height;
};
int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<Z>v(n);
        for (int i = 0; i <n ; ++i) {
            cin >> v[i].width >> v[i].height;
        }
        int y;
        cin >> y;
        int best = 0;
        for(int i = 0; i < n; i++){
            int t1 = v[i].height;
            int j = i;
            int length = v[i].width;
            while (y > length){
                j++;
                if( j < n && v[j].height < t1 ){
                    length += v[j].width;
                }
                else{
                    break;
                }
            }
            if (y <= length){
                best = max(best, t1);
            }

            j = i;
            length = v[i].width;
            while (y > length){
                j--;
                if( j >= 0 && v[j].height < t1 ){
                    length += v[j].width;
                }
                else{
                    break;
                }
            }
            if (y <= length){
                best = max(best, t1);
            }
        }
        cout << best + y << endl;
    }
}
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool check_pos(int s , int d , int u , int t){    
    while(d <= u){
        if(s+d == t)
            return true;
        d++;
    }
    return false;
}

int main() {
    int n , s , t;
    cin >> n >> s >> t;
    int r[n] , g , seed , p;
    cin >> r[0] >> g >> seed >> p;
    // Formula : r[i] = (r[i-1]*g + seed) % p;
    
    int ans = 0;

    for(int i = 1 ; i < n ; i++){
        r[i] = (r[i-1]*g + seed) % p;
        if(check_pos(s , -1 * r[i] , r[i] , t)){
            ans++;
            break;
        }else if(r[t] == 0){
            ans = -1;
            break;
        }else if(s == t){
            ans = 0;
            break;
        }
        else {
            s - r[i];
            ans++;
        }
    }

    cout << ans;

    return 0;
}

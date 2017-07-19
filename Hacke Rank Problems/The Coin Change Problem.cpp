// Coin changing problem
#include <bits/stdc++.h>
using namespace std;
#define ll long long

    int c[52];
    int numCoins;
    ll table[52][252];
    bool calc[52][252];

    ll solve(int i , int make){
        if(make < 0)
            return 0;
        if(make == 0)
            return 1;
        if(i > numCoins)
            return 0;
        if(calc[i][make] == false){
            table[i][make] = solve(i , make - c[i]) + solve(i+1, make);
            calc[i][make] = true;
        }
        return table[i][make];
    }

    int main(){
        int make;
        cin >> make >> numCoins;
        for(int i = 1 ; i <= numCoins ; i++)
            cin >> c[i];
        cout << solve(1 , make) << endl;

    return 0;
    }

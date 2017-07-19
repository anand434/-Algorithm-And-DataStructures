#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
int main() {
    int n;
    ll  hit , t;
    cin >> n >> hit >> t;
    ll a[n];
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    sort(a, a+n);
    ll x = 0;
    for(int i = 0 ; i < n ; i++){
        while(a[i] > 0 && x < t){
            a[i] -= hit;
            x++;
        }
    }
    int ans = 0;    
    for(int i = 0 ; i < n ; i++){
        if(a[i] <= 0){ 
            ans++;}
    }
    cout << ans;
    return 0;
}
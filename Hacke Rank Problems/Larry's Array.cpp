#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int q , n;
    cin >> q;
    while(q--){
        cin >> n;
        int a[n];
        int count = 0;
        for(int i = 0 ; i < n; i++){
            cin >> a[i];
            if(i > 0){
                int k = i;
                while(a[i]<a[i-1] && i > 0){
                    swap(a[i] , a[i-1]);
                    i--;
                    count++;
                }
                i = k;
            }
        }
        if(count%2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
    return 0;
}

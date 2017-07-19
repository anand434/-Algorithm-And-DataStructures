#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;
bool check(int n , int a[] , int b[]){
    for(int i = 0; i < n; i++){
        if(b[i] != a[i]){
            return false;
            break;
        }
    }
    return true;
}
int main() {
    int q;
    cin >> q;
    while(q--){
        int n ;
        cin >> n;
        int a[n] , b[n] ;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b , b+n);
        for(int i = 0; i < n-1; i++){
            if(abs(a[i+1]-a[i]) == 1)
                if(a[i] > a[i+1])
                    swap(a[i] , a[i+1]);   
        }
        if(check(n, a , b))
            cout << "Yes" << endl;
        else 
            cout << "No" << endl;
    }
    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int q;
    cin >> q;
    int n , k;
    while(q--){
        cin >> n >> k;
        int a[n] , flag = 0;
        for(int i = 0 ; i < n ; i++)
            cin >> a[i];
        sort(a , a+n);
        for(int i = 0 ; i < n ; i++)
            if(a[i] > 0){
                flag = i+1;
                break;
            }
        if(flag > k)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}

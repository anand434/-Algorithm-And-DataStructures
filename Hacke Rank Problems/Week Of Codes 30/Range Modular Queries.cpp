#include <iostream>
using namespace std;

int find(int a[], int l, int r, int x, int y){
    int ctr = 0;
    for(int i = l; i <= r; i++)
        if(a[i] % x == y)
            ctr++;
    return ctr;
}

int main(){
    int n , q;
    cin >> n >> q;
    int ar[n];
    int l, r, x, y;
    for(int i = 0; i < n; i++)
        cin >> ar[i];
    while(q--){
        cin >> l >> r >> x >> y;
        cout << find(ar, l, r, x, y) << endl;
    }
    return 0;
}

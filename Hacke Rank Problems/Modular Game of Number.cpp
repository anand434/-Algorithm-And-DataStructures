#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n , p , q;
    cin >> n >> p >> q;
    int a[p] , b[q];
    for(int i=0; i<p ; i++)
        cin >> a[i];
    for(int i=0; i<q ; i++)
        cin >> b[i];
    sort(a, a+p);
    sort(b, b+q);
    int sum = a[p-1]+b[q-1];
    if(sum%n == 0)
        cout << 1;
    else{
        cout << (sum-(sum%n));
    }
    return 0;
}

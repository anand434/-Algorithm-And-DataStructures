#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

ll sum_fib(ll n){
    ll a , b , c, sum = 0;
    b = 1 ; c = 1;
    while(c < n){
        if(c%2 == 0)
            sum += c;
        a = b;
        b = c;
        c = a+b;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    while(n--){
        ll k , s;
        cin >> k;
        s = sum_fib(k);
        cout << s << endl;
    }
    return 0;
}

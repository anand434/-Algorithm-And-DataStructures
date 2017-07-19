/*

Method 1 : O(n)
    s = 1 + 2 + 3 + ....... + n
    for loop 1 to n 
        sum += n
Method 2 : O(1)
    s = 1 + 2 + 3 + ....... + n
    print n*(n+1)/2

*/

#include <iostream>
using namespace std;
#define ll long long
int main(){
    ll n , s = 0;
    cin >> n;
    s = n*(n+1)/2;
    cout << s;
    return 0;
}
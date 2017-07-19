#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a;
    cin >> a;
    int ar[a];
    for(int i=0; i<a; i++)
        cin >> ar[i];
    sort(ar , ar+a);
    if(ar[a-1] >= a)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[100] , ai[n];
    for(int i = 0 ; i < 100 ; i++)
        a[i] = 0;
    for(int i = 0 ; i < n ; i++){
        cin >> ai[i];
        a[ai[i]] += 1;
    }
    for(int i = 0 ; i < 100 ; i++)
        cout << a[i] << " ";
    return 0;
}

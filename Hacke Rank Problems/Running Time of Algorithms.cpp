#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=1; i<=n; i++)
        cin >> a[i];
    int ctr = 0;
    for(int i=n; i>1; i--){
        for(int j=n; j>1; j--){
            if(a[j] < a[j-1]){
                swap(a[j] , a[j-1]);
                ctr++;
            }
        }
    }
    cout << ctr;
    return 0;
}

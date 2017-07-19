#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int min(int  a ,int b){ return a<b?a:b ; }
int max(int  a ,int b){ return a>b?a:b ; }

int search(int a[] , int f , int l , int s)
{
    for(int i = f; i < l; i++)
        if(a[i] == s)
            return i+1;
    return 0;
}

int main(){
    int q , m , c , n;
    cin >> q;
    while(q--){
        cin >> m >> n;
        int a[n] , b[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b+n);
        int x1 , x2 , pos1 , pos2 , dif , z = 0;
        while(z!=n-1){
            x1 = b[z];
            dif = m - x1;
            if(binary_search(b , b + n , dif)){
                x2 = dif;
                break;
            }
            else
                x1 = b[z++];
        }
        if(x1 == x2){
            pos1 = search(a , 0 , n , x1);
            pos2 = search(a , pos1 , n , x2);
        }else{
            pos1 = search(a , 0 , n , x1);
            pos2 = search(a , 0 , n , x2);
        }
        cout << min(pos1 , pos2) << " " << max(pos1 , pos2) << endl;
    }
    return 0;
}

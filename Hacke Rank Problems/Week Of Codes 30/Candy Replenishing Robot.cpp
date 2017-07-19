#include <iostream>
using namespace std;

int check(int n , int l){
    if(l < 5)
        return (n-l);
    return 0;
}

int main(){
    int n , t;
    cin >> n >> t;
    int ar[t];
    for(int i=1; i<=t; i++)
        cin >> ar[i];
    int l = n , res = 0 , y = 0;
    for(int i=0; i<t; i++){
        if(check(n , l) == 0){
            l -= ar[i+1];
        }else{
            res = check(n ,l);
            l = n;
            y += res;
            i--;
        }
    }
    cout << y;
    return 0;
}
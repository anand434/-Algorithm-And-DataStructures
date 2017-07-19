#include <iostream>
using namespace std;

int min(int a , int b){ return a<b?a:b; }

int twinArray(int a[], int b[] , int n){
    int fmina , smina , fminb , sminb;
    int indexa = -1;
    int indexb = -1;
    
    if(a[0] <= a[1]){
        fmina = a[0]; smina = a[1];
        indexa = 0;
    }else{
        fmina = a[1]; smina = a[0];
        indexa = 1;
    }
    if(b[0] <= b[1]){
        fminb = b[0]; sminb = b[1];
        indexb = 0;
    }else{
        fminb = b[1]; sminb = b[0];
        indexb = 1;
    }
    for(int i = 2; i < n; i++){
        if(fmina >= a[i]){
            smina = fmina; fmina = a[i];
            indexa = i;
        }
    }
    for(int i = 2; i < n; i++){
        if(fminb >= b[i]){
            sminb = fminb; fminb = b[i];
            indexb = i;
        }
    }
    
    if(indexa != indexb)
        return (fmina+fminb);
    else
        return min((fmina + sminb), (smina + fminb));
    
}

int main(){
    int n ; 
    cin >> n;
    int a[n] , b[n];
    for(int i = 0 ; i < n; i++)
        cin >> a[i];
    for(int i = 0 ; i < n; i++)
        cin >> b[i];
    int ans = twinArray(a , b , n);
    cout << ans;
    return 0;
}
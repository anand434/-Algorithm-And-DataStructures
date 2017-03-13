// AKS Algorithm
// AKS (Agrawal Saxsena) Prime No. Test
#include <iostream>
using namespace std;

/*
    w =2
    while(i * i <= n){
        if(n % i == 0)
            return 0;
        i += w;
        w = 6 - w;
    }
*/

int isprm(long long n){
    long long i = 5 , w = 2;
    if(n == 2 || n == 3)
        return 1;
    if(n % 2 == 0 || n % 3 == 0 || n == 1)
        return 0;
    while(i * i <= n){
        if(n % i == 0)
            return 0;
        i += w;
        w = 6 - w;
    }
    return 1;
}

int main(){
    long long n = 1000000;
    int count = 0;
    for(long long i = 1 ; i <= n ; i++){
        if(isprm(i) == 1)
            count++;
        if(count == 10001){
            cout << "10001 Prime No. is : " << i ;
            break;
        }
    }
}
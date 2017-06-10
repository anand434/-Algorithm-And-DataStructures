// Rabin-Karp Algorithm
// time complexity - O(nm)

#include <bits/stdc++.h>
using namespace std;
#define d 256

void search(char pat[] , char txt[] , int q){
    int m = strlen(pat);
    int n = strlen(txt);
    int p = 0 , t = 0;
    int h = 1;
 
    for(int i = 0 ; i < m-1 ; i++)
        h = (h*d)%q;

    for(int i = 0 ; i < m ; i++){
        p = (d * p + pat[i]) % q;
        t = (d * t + txt[i]) % q; 
    }

    for(int i = 0; i <= n-m; i++){
        if(p == t){
            for(j = 0 ; j < m ; j++){
                if()
            }
        }
    }

}

int main(){


    return 0;
}
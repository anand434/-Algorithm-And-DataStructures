#include <bits/stdc++.h>
using namespace std;

vector <int> v;

bool isPrime(int x){
    for(int i = 3 ; i <= (int)sqrt(x) ; i+=2)
        if(x%i==0)
            return false;
    return true;
}

void genPrime(){
    v.push_back(2);
    v.push_back(3);
    for(int i = 5 ; i < 200000 ; i+=2){
        if(i%3 != 0)
            if(isPrime(i))
                v.push_back(i);
    }
}

int main(){
    int n , q;
    cin >> n;
    genPrime();
    while(n--){
        cin >> q;
        cout << v[q-1] << endl;
    }
    return 0;
}

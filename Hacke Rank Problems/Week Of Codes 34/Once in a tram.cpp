// Week Of Codes 34
// Once in a tram
#include <iostream>
using namespace std;

bool check(int x){
    int f = 0 , s = 0;
    for(int i = 0 ; i < 3 ; i++){
        f += x%10;
        x /= 10;
    }
    for(int i = 0 ; i < 3 ; i++){
        s += x%10;
        x /= 10;
    }
    if(f == s)  return true;
    else    return false;
}

int find(int x){
    while(1){
        if(check(x))    break;
        else    x++;
    }
    return x;
}

int main() {
    int n;
    cin >> n;
    cout << find(n++);
    return 0;
}
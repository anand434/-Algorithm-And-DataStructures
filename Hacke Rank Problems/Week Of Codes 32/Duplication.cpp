#include <string>
#include <iostream>
using namespace std;
    
string buildString(){
    string si = "0" , se;
    string st = "1";
    while(se.length() < 1001){
        se = si + st;    
        st = st + si;
        si = se;
    }
    return se;
}
int main() {
    string s = buildString();
    int q , x;
    cin >> q;
    while(q--){
        cin >> x;
        cout << s[x] << endl;
    }
    return 0;
}

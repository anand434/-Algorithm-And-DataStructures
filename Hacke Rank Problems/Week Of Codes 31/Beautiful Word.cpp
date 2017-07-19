#include <bits/stdc++.h>
using namespace std;
#define sz(x) ((int) (x).size())
#define forn(i,n) for (int i = 0; i < int(n); i++)
typedef long long ll;
typedef long long i64;
typedef long double ld;
const int inf = int(1e9) + int(1e5);
const ll infl = ll(2e18) + ll(1e10);

string vow = "aeiouy";

bool isVowel(char c){
    return find(vow.begin() , vow.end() , c) != vow.end();
}

int main(){
    #ifdef LOCAL
    assert(freopen("test.in" , "r" , stdin));
    #endif
    string s;
    cin >> s;
    forn(i , sz(s) - 1){
        if(s[i] == s[i+1] || (isVowel(s[i]) && isVowel(s[i+1]))){
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
}
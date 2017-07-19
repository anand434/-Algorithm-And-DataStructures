#include <bits/stdc++.h>
using namespace std;
#define sz(x) ((int) (x).size())
#define forn(i, n) for (int i = 0; i < n; i++)
typedef long double ld;
typedef long long ll;
typedef long long i64;

const int inf = int(1e9) + int(1e5);
const ll infl = ll(2e18) + ll(1e10);

void solve(){
    int n;
    cin >> n; 
    vector <int> a(n);
    forn(i , n)
        cin >> a[i];
    a.push_back(1);
    int turns = 0;
    for(int l = 0 ; l < n ; l++){
        if(a[l] == 1)
            continue;
        int r = l;
        while(r < n && (a[r] == 0 || a[r+1] == 0))
            ++r;

        turns += max(0 , r - l - 2);
        l = r - 1; 
    }
    cerr << turns << '\n';
    cout << (turns % 2 ? "Alice" : "Bob") << endl;
}

int main(){
    #ifdef LOCAL
    // #include cassert
    // Mapping large no to a unique number using mod
    assert(freopen("test.in" , "r" , stdin));
    #endif

    int tn;
    cin >> tn;
    forn(i , tn)
        solve();

    return 0;
}
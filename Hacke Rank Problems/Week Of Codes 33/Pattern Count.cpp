#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    int q;
    cin >> q;
    while(q--){
        cin >> str;
        int ans = 0;
        for(int i=0; i < str.length()-1; i++){
            if(str[i] == '1' && str[i+1] == '0'){
                while(str[i+1] == '0')
                    i++;
                if(str[i+1] == '1')
                    ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
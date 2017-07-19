// longest palindrome sequencd
#include<bits/stdc++.h>
using namespace std;

map <int, int> v;

void transform(int a[] , int m){
    int mid = m%2 == 0 ? m/2 - 1 : m/2 ;
    for(int i = 0; i <= mid ; ++i){
        if(a[i] != a[m-i-1])
            if(v[a[m-i-1]] == a[i] || v[a[i]] == a[m-i-1]){
                a[m-i-1] = a[i];
            }
    }

}

int lps(int a[], int m, int n){
    if(m == 1)
        return 1;
    if(m == 2)
        if(a[0] == a[1])
            return 2;
        else return 1;

    int len = 0 , mid = -1;
    int freq[n] = { 0 };

    for(int i = 0; i < m; i++)
        freq[a[i]]++;

    for(int i = 0; i < n; i++){
        if(freq[i]%2 != 0 && mid == -1){
            mid = i;
            len += freq[i];
        } else if (freq[i]%2 != 0 && mid != -1)
            len += (freq[i] - 1);
        else
            len += freq[i];
    }
    return len;
}

int main(){
    int n , k , m , x , y;
    cin >> n >> k >> m;
    int a[m];
    for(int i = 0; i < k; i++){
        cin >> x >> y;
        v[x] = y;
    }
    for(int i = 0; i < m; i++)
        cin >> a[i];

    transform(a , m);
    int temp = lps(a, m, n);
    cout << temp << endl;

    return 0;
}
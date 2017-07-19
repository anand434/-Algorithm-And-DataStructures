// longest palindrome sequencd
#include<bits/stdc++.h>
using namespace std;

int lps(int a[], int n){
    if(n == 1)
        return 1;
    if(n == 2)
        if(a[0] == a[1])
            return 2;
        else return 1;

    int len = 0 , mid = -1;
    int freq[10] = { 0 };

    for(int i = 0; i < n; i++)
        freq[a[i]]++;

    for(int i = 0; i <= 9; i++){
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
    int n , u , v , m = 0;
    cin >> u >> v;
    n = u * v;
    int a[n], ar[u][v];
    for(int i = 0; i < u; i++){
        for(int j = 0; j < v; j++){
            cin >> ar[i][j];
            a[m++] = ar[i][j];
        }
    }

    // finding the index
    int temp = lps(a, m);
    int y = temp / u;
    int z = temp / v;

    cout << temp << endl;
    cout << 0 << " " << 0 << " ";
    cout << (y-1) << " " << (z-1);
    return 0;
}
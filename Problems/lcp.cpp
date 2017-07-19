#include <bits/stdc++.h>
using namespace std;

int lcp(string str1 , string str2 , int m , int n){
	int a[n+1][m+1];
	int max = 0;
	for(int i = 0; i <= m; ++i){
		for(int j = 0; j <= n; ++j){
				if(i == 0)
					a[i][j] = 0;
				else if(j == 0)
					a[i][j] == 0;
				else if(str1[i-1] == str2[j-1]){
					a[i][j] = a[i-1][j-1]+1;
					if(max < a[i][j]) max = a[i][j];
				}
				else
					a[i][j] = 0;
			}	
	}
	return max;
}

int main(){
	string str1 , str2;
	cin >> str1 >> str2;
	int l1 = str1.length();
	int l2 = str2.length();
	cout << lcp(str1 , str2 , l1 , l2);
	return 0;
}
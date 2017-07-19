// dynamic programing
#include <bits/stdc++.h>
using namespace std;

int calc(int a[] , int l){
	
	int s = sizeof(a)/sizeof(a[0]);

	int dp[s][l+1];

	for(int i = 1; i <= s; ++i){
		for(int j = 0; j <= l; ++j){
			if(i == 0)
				dp[i][j] = j;
			else if(j == 0)
				dp[i][j] = i;
			else if(j >= i)
				dp[i][j] = max(dp[i-1][j] , a[i-1] + dp[i][j-i]);
			else
				dp[i][j] = dp[i-1][j];
		}			
	}	

	return dp[s][l];
}	

int main(){
	int len = 5;
	int val[] = {2 , 5 , 7 , 8};
	int profit = calc(val , len);
	cout << profit ;	
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 6;
int cnt[N];
int lmulA[N];
int lmulB[N];
int n;
int ar[N];
int br[N];

int main(){

    scanf("%d" , &n);
	
    for(int i = 1; i <= n; ++i) {
		scanf("%d" , ar + i);
	}
	
    for(int i = 1; i <= n; ++i) {
		scanf("%d" , br + i);
	}
    
    for(int i = 1; i <= n; ++i) {
		++cnt[arr[i]];
	}
    
    for(int i = 1; i < N; ++i) {
		for(int j = i; j < N; j += i) {
			if(cnt[j]) {
				lmulA[i] = max(lmulA[i] , j);
			}
		}
	}
	
    for(int i = 1; i <= n; ++i) {
		--cnt[arr[i]];
	}
	
    for(int i = 1; i <= n; ++i) {
		++cnt[brr[i]];
	}
	
    for(int i = 1; i < N; ++i) {
		for(int j = i; j < N; j += i) {
			if(cnt[j]) {
				lmulB[i] = max(lmulB[i] , j);
			}
		}
	}
	int mx = 0;
	
    for(int i = 1; i < N; ++i) {
		if(lmulA[i] && lmulB[i]) {
			mx = i;
		}
	}
	printf("%d\n" , lmulA[mx] + lmulB[mx]);
	return 0;
}
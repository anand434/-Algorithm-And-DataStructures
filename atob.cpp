// Given a nxn grid how many paths are there from A to reach B
// Moves : DOWN RIGHT LEFT
// Since A is the upper most position;

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n = 5;
	int a[n][n];
	int ans = 1;

	for (int i = 0; i < n; ++i)
		a[i][0] = 1;
	for (int j = 1; j < n; ++j)
		a[0][j] = 1;

	for (int i = 1; i < n; ++i)
		for (int j = 1; j < n; ++j)
			a[i][j] = a[i-1][j]+ a[i][j-1];

	cout << a[n-1][n-1];
	
	return 0;
}
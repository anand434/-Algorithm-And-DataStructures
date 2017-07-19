// Dynamic Programing
// Edit distance problem

#include <iostream>
#include <string>
using namespace std;

int min(int a , int b , int c){
	if(a > b)
		return b > c ? c : b;
	return a > c ? c : a;
}

int main(){
	string str1 , str2;
	cin >> str1 >> str2;
	int l1 = str1.length() , l2 = str2.length();
	int a[l1][l2];

	// Initailization
	for(int i = 0; i <= l2; ++i)
		a[i][0] = i;	
	for(int i = 1; i <= l1; ++i)
		a[0][i] = i;

	for(int i = 1 ; i <= l2 ; i++){
		for(int j = 1; j <= l1; ++j){
			if(str1[i-1] == str2[j-1])
				a[i][j] = a[i-1][j-1];
			else
				a[i][j] = min(a[i-1][j] , a[i-1][j-1] , a[i][j-1]) + 1;
		}
	} 
	for(int i = 0 ; i <= l2 ; i++){
		for(int j = 0; j <= l1; ++j)
			cout << a[i][j] << "  ";
		cout << endl;
	}		
	return 0;
}
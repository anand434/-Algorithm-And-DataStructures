#include <iostream>
using namespace std;

int min(int a , int b) { return a>b?b:a; }

int main(){
	int d[] = {1, 5, 6, 8};
	int t = 11;
    int a[5][12];

    for(int j = 0 ; j <= t ; j++)
        a[0][j] = j;

    for(int i = 1 ; i <= 4 ; i++)
        for(int j = 0 ; j <= t ; j++){
            if(j < d[i-1])
                a[i][j] = a[i-1][j];
            else
                a[i][j] = min(a[i-1][j] , (a[i][j-d[i-1]]+1));
        }
    
    for(int i = 0 ; i <= 4 ; i++){
        for(int j = 0 ; j <= t ; j++)
            cout << a[i][j] << "  ";
    cout << endl;
    }

	return 0;
}
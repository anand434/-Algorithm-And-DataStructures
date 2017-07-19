// NSE ISB CodeSprint
// Anand Kumar

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n ;
    cin >> n;
    int crosover = 300;
    double stma[n+1] = {0} , ltma[n+1] = {0};
    int ar[n+1];

    for(int i = 1 ; i <= n ; i++)
        cin >> ar[i];

    for(int i = crosover ; i <= n; i++){
        for(int j = i-59 ; j <= i ; j++){
            stma[i] += ar[j];   
        }
        stma[i] /= 60;

        for(int j = i-299; j <= i ; j++){ 
            ltma[i] += ar[j];
        }
        ltma[i] /= 300;
    }

    for(int i = crosover + 1 ; i <= n ; i++){
        cout << fixed << showpoint;
        cout << setprecision(2);
        if(stma[i-1] > ltma[i-1] && stma[i] <= ltma[i])
            cout << i << " " << stma[i] << " " << ltma[i] << endl;

        else if(stma[i-1] < ltma[i-1] && stma[i] >= ltma[i])
            cout << i << " " << stma[i] << " " << ltma[i] << endl;

        else if(stma[i-1] == ltma[i-1] && stma[i] != ltma[i])
            cout << i << " " << stma[i] << " " << ltma[i] << endl;
    }

    return 0;
}
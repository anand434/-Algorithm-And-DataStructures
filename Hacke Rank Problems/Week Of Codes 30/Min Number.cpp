#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int n; 
    cin >> n;
    string str = "min(int, int)";
    string str1 = "min(int, ";
    string str2 = "int";
    string str3 = ")";       
    if(n!=1){
        for(int i = 1 ; i < n ; i++){
            cout << str1;
        }
        cout << str2;
        for(int i = 1 ; i < n ; i++){
            cout << str3;
        }
    }   
    return 0;
}
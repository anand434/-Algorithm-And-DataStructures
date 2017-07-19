#include <string.h>
#include <iostream>
using namespace std;

string status(int x){
    if(x%7 == 1 || x%7 == 0)
        return "Second";
    else
        return "First";

}

int main() {
    int t;
    cin >> t;
    int n;
    while(t--){
        cin >> n;
        if(n == 1 or n == 7)
            cout << "Second" << endl;
        else if(n > 1 && n <7)
            cout << "First" << endl;
        else
            cout << status(n) << endl;
    }
    return 0;
}

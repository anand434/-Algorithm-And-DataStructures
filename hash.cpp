#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector <string> hashTable[20] ;
int hashTableSize = 20 ;

void insert(string s){
    // Compute the index using hash function
    int index = hashFunc(s) ;
    // Insert the element in the linked list
    hashTable[index].push_back(s) ;
}

void search(string s){
    // Compute the index using hash function
    int index = hashFunc(s);
    // Search the linked list at the specific index
    for(int i = 0 ; i < hashTable[index].size() ; i++){
        if(hashTable[index][i] == s){
            cout << s << " is found!" << endl;
            return;
        }
    }
    cout << s <<" not found!" << endl; 
}
    
int main(){

    return 0;
}
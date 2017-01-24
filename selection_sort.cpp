//not always efficient
//cost  =  O(n^2) 

#include <iostream>
using namespace std;

void selection_sort(int a[] ,int size){
    int min;
    int temp;

    for(int i =0 ; i <= size-1 ; i++){
        min = i;
        for(int j = i+1 ; j < size ; j++){
            if(a[j]<a[min])
                min = j;
        }

        temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }   
}

int main(){
    int a[10];
    int size = 10;
    for(int i = 0 ; i < 10 ; i++)
        cin >> a[i];
    
    selection_sort(a , size);
    
    for(int i = 0 ; i < 10 ; i++)
        cout<< a[i]<< "\t";
    
    return 0;
}

//not always efficient
//cost  =  O(n^2) 

#include <iostream>
using namespace std;

int partition (int a[] , int start , int end){
    int i = start + 1;
    int p = a[start];
    int temp;
    for(int j = start + 1 ; j <= end ; j++){
        if(a[j] < p){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i += 1;
        }   
    }
    swap(a[start] , a[i-1]);
    return i-1;    
}

void quick_sort(int a[] , int start ,int end){
    if(start < end){
        int p_position = partition(a , start , end);
        quick_sort(a , start , p_position - 1);
        quick_sort(a , p_position + 1 , end);
    }
}

int main(){
    int a[10];
    int start = 0 , end = 9;
    for(int i = 0 ; i < 10 ; i++)
        cin >> a[i];
    
    quick_sort(a , start , end);
    
    for(int i = 0 ; i < 10 ; i++)
        cout<< a[i]<< "\t";
    
    return 0;
}

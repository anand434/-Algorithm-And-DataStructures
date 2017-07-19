// Cost = O(n^2)

#include <iostream>
using namespace std;

void insertion_sort ( int A[ ] , int n) 
{
     for( int i = 0 ;i < n ; i++ ) {
      int temp = A[ i ];    
      int j = i;
      while(  j > 0  && temp < A[ j -1]) {
                A[ j ] = A[ j-1];   
                j= j - 1;
           }
           A[ j ] = temp;       
     }  
}

int main(){
int a[10];
    for(int i=0;i<10;i++)
        cin>>a[i];
    insertion_sort(a ,10);
    for(int i=0;i<10;i++)
        cout<<a[i]<<"\t";
    return 0;
}

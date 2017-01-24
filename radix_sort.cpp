// time complexity O(b+n)
// cost for sorting O(b+n)*(maxx)

#include <iostream>
using namespace std;

int maxElement(int ar[] , int size){
    int max = ar[0];

    for(int i=1 ; i<size ; i++)
        if(ar[i] > max)
            max = ar[i];
    
    return max;
}

void countSort( int ar[] , int size , int exp){
    int output[size];
    int i , count[10] = {0} ;

    for(i=0; i<size;i++){
        count[(ar[i] / exp) % 10]++;
    } 

    for( i=0; i<10; i++)
        count[i] += count[i-1];

    for( i=0 ; i<10 ; i++){
        output[count[(ar[i] / exp ) % 10] -1] = ar[i];
        count[(ar[i] / exp) % 10]-- ;
    }
}

void radix_sort( int ar[] , int size){
    int max = maxElement(ar , size);

    for(int exp= 1; max / exp > 0  ; exp *= 10)
        countSort(ar , size , exp);
        
}

void print(int array[], int size)
{
    for(int i = 0; i < size; i++)
        cout << array[i] << " ";

    cout << endl;
}

int main(){
    int array[] = {47 , 35 , 42 , 15 , 12 , 76 , 457 , 546};
    int size = 8 ;

    radix_sort( array , size);

    print(array , size);    
    return 0;
}

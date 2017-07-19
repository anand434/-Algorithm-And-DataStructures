//max_heapify has complexity O(logN)
//build_maxheap has complexity O(N)
//heap_sort will run max_heapify N-1 times
//so we get Cost of O(NlogN)

#include <iostream>
#include <algorithm>
using namespace std;


void heapify( int ar[] , int n , int i){
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    
    if(l<n&&ar[l]>ar[largest])
        largest = l;

    if(r<n&&ar[r] > ar[largest])
        largest = r;    

    if(largest != i)
    {
        swap(ar[i] , ar[largest]);
        heapify(ar , n ,largest);
    }
}

void heap_sort(int a[] , int n){
    for(int i = n/2 -1 ; i >= 0 ; i--)
        heapify(a , n , i);
    
    for( int i = n-1 ; i>= 0 ; i--){
        swap(a[0] , a[i]);
        heapify(a , i , 0);
    }
}

int main(){
    int t ; 
    cout<<"enter no of elements : ";
    cin>>t ;
    
    int arr[t];
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "enter  max-heaps : ";
    for(int i = 0 ; i < t ; i++)
        cin>>arr[i];

    heap_sort(arr , n);

    cout << "sorted array : ";
    for(int i = 0 ; i < t ; i++)
        cout<<"  "<<arr[i]; 

    return 0;
}

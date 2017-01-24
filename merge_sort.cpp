//Cost = O(nlog(n)) 

#include <iostream>
using namespace std;

void merge(int a[] , int start, int mid , int end){
    int p = start , q = mid + 1;
    int arr[end-start+1] , k=0;
    
    for(int i = start ; i<=end ;i++){
        if(p>mid)s
            arr[k++] = a[q++];
        
        else if (q>end)
            arr[k++] = a[p++];

        else if(a[p]<a[q])
            arr[k++]=a[p++];

        else
            arr[k++] = a[q++];
   

   for(int p=0;p<k;p++)
       a[start++] = arr[p];
}

void merge_sort(int a[] , int start , int end){
    if(start<end){
        int mid = (start+end)/2;
        merge_sort(a , start ,mid);
        merge_sort(a , mid+1 ,end);
        merge(a , start , mid ,end);
    }
}


int main(){
    int a[10];
    int start = 0 ,end = 9;
    for(int i=0;i<10;i++)
        cin>>a[i];
    merge_sort(a , start ,end );
    for(int i=0;i<10;i++)
        cout<<a[i]<<"\t";
    return 0;
}
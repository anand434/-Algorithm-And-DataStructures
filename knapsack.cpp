// KnapSack Problem - Dynamic Programing
#include <iostream>
using namespace std;
int max(int a , int b){ return (a > b)? a : b; } 

int knapSack(int W , int wt[] , int val[] , int n){

    // Base Case 
    if(n==0 || W==0)
        return 0;
    //if weight of the nth item is more than knapSack weight capacity W , then
    // this item cannot be include in the optimal solution
    if(wt[n-1] > W)
        return knapSack(W , wt , val , n-1);

    // Return the maximium of two case : 
    // 1 nth item include 
    // 2 not include 
    else
        return max( val[n-1] + knapSack(W-wt[n-1] , wt , val , n-1),
                                        knapSack(W , wt , val , n-1));

}
int main(){
    cout << "Enter the number of Items : ";
    int n , W ;
    cin >> n;
    int val[n] , wt[n];
    for(int i=0; i<n; i++){
        cout << "Enter the value and weight " << i << " : ";
        cin >> val[i] >> wt[i] ;
        cout << endl;
    } 
    cout << "Enter the Capacity : " ;
    cin >> W ;
    cout << "\n Max Profit : " << knapSack(W , wt , val , n);
    return 0;
}
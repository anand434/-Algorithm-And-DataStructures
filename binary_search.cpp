// time complexity : O(logN)
// space complexity : O(1)

#include <iostream>
#include <vector>

using namespace std;

bool binarySearch(vector<int> v , int val){
	
	size_t mid , left = 0 ;
	size_t right = v.size();

	while(left < right){
		mid = (left + right ) / 2;
		if(val > v[mid])
			left = mid + 1;
		else if (val < v[mid])
			right = mid;
		else
			return true;
	}

	return false;	
}

int main(){
	vector<int> v;
	bool b;
	int x;
	cout<<"enter numbers : ";
	for(int i = 0 ; i < 6 ; i++){
		cin >> x;
		v.push_back(x);
	}

	int varSearch;
	cin>>varSearch;
	b = binarySearch( v , varSearch);

	if(!b)
		cout<<"not found";
	else 
		cout<<"found";

	return 0;
} 
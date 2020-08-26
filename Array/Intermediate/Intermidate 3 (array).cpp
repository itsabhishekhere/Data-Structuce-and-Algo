#include <iostream>
using namespace std;

int search_m(int arr[], int l, int r){
	if (r >= l){
		int mid = (l + (r - l) )/ 2; 
		
		if (arr[mid] > mid+1  && arr[mid-1] == mid){
			return mid + 1;
		}
		if(arr[mid] > mid+1 && arr[mid-1] > mid){
			return search_m(arr, l, mid-1);
		}
		if(arr[mid] == mid+1 && arr[mid+1] > mid+2){
			return mid + 2;
		}
		return search_m(arr, mid+1, r);
		
	}
	
	return -1;
}


int main(void) {
	int cases;
	cin >> cases;
	
	for(int i = 0; i < cases; i++){
	    int n;
	    cin >> n;
	    int arr[n-1];
	    
	    for(int j = 0; j < n-1; j++){
	        cin >> arr[j];
	    }
	    
	    int result = search_m(arr, 0, n-1);
  
        cout << result <<endl;
	}
	
	return 0;
}

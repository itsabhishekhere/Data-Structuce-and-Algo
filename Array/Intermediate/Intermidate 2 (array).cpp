#include <iostream>
using namespace std;

void printarray(int arr[], int size){
	
	for (int i = 0; i < size; i++){
		cout << arr[i] << " "; 
	}
  
    cout << endl; 
}


int main() {
	int cases;
	cin >> cases;
	for(int i = 0; i < cases; i++){
	    int n;
	    cin >> n;
	    int arr[n];
	    
	    for(int j = 0; j < n; j++){
	        cin >> arr[j];
	    }
	    
	    int temp = arr[n-1];
    	for (int j = n-1; j > 0; j--){
	    	arr[j] = arr[j-1]; 
	    }
  
        arr[0] = temp;
	    
	    printarray(arr, n);
	}
	return 0;
}

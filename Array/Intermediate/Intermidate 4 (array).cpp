#include <iostream>
using namespace std;

int count_p(int arr[], int n, int k){
	int i, j, count = 0;
	
	for(i = 0; i < n-1; i++){
		for(j = i+1; j < n; j++){
			if(arr[i] + arr[j] == k){
				count++;
			}
		}
	}
	
	return count;
}


int main(void) {
	int cases;
	cin >> cases;
	
	for(int i = 0; i < cases; i++){
	    int n, k;
	    cin >> n >> k;
	    int arr[n];
	    
	    for(int j = 0; j < n; j++){
	        cin >> arr[j];
	    }
	    
	    int result = count_p(arr, n, k);
  
        cout << result <<endl;
	}
	
	return 0;
}

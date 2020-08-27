#include <iostream>
using namespace std;

int duplicates(int a[], int n) {
    for(int i = 0; i < n; i++){
        a[a[i]] = a[a[i]] + n;
    }
    
    int j = 0;
    int b[n/2];
    b[0] = -1;
    
    for(int i = 0; i < n; i++){
        if(a[i] >= 2*n){
            b[j] = i;
            j++;
        }
    }
    
    if(j == 0){
    	cout << -1;
	}
	for(int i = 0; i < j; i++){
        cout << b[i] <<" ";
    }
}


int main() {
	int n;
	cin >> n;
	int a[n];
	
	for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    duplicates(a, n);
	
	return 0;
}

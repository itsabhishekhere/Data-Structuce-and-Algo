#include<iostream>
using namespace std;

int maximum(int a[], int n){
	int max = a[0];
	for(int i = 1; i < n; i++){
		if (max < a[i]){
			max = a[i];
		}
	}
	
	return max;
}

int minimum(int a[], int n){
	int min = a[0];
	for(int i = 1; i < n; i++){
		if (min > a[i]){
			min = a[i];
		}
	}
	
	return min;
}

int main(){
	int length;
	cin >> length;
	int a[length];
	
	for(int i = 0; i < length; i++){
		cin >> a[i];
	}
	
	int max = maximum(a, length);
	int min = minimum(a, length);
	
	cout << "Range : " << max - min; 
	 
	return 0;
}

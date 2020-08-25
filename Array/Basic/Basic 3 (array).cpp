#include<iostream>
using namespace std;

void maximum(int a[], int n){
	int max = a[0];
	for(int i = 1; i < n; i++){
		if (max < a[i]){
			max = a[i];
		}
	}
	
	cout << "MAX:" << max <<endl;
}

void minimum(int a[], int n){
	int min = a[0];
	for(int i = 1; i < n; i++){
		if (min > a[i]){
			min = a[i];
		}
	}
	
	cout << "MIN:" << min <<endl;
}

int main(){
	int length;
	cin >> length;
	int a[length];
	
	for(int i = 0; i < length; i++){
		cin >> a[i];
	}
	
	maximum(a, length);
	minimum(a, length);
	
	return 0;
}

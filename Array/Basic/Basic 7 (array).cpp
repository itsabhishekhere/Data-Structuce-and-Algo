#include<iostream>
using namespace std;

int main(){
	int length,n;
	cin >> n;
	cin >> length;
	int a[length];
	
	for(int i = 0; i < length; i++){
		cin >> a[i];
	}
	
	int count = 0; 
	
	for(int i = 0; i < length; i++){
		if(a[i] == n){
			count++;
		}
	}
	cout << count;
	
	return 0;
}

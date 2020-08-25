#include<iostream>
using namespace std;

void reverse(int a[], int left, int right){
	if(left >= right){
		return;
	}
	
	int temp = a[left];
    a[left] = a[right];
	a[right] = temp;
	
	reverse(a, left + 1, right - 1);
}

int main(){
	int length,left,right;
	cin >> length;
	int a[length];
	
	for(int i = 0; i < length; i++){
		cin >> a[i];
	}
	
	for(int i = 0; i < length; i++){
		cout << a[i]<<" ";
	}
	cout<<endl;
	reverse(a, 0, length-1);
	
	for(int i = 0; i < length; i++){
		cout << a[i] <<" ";
	}
	
	return 0;
}

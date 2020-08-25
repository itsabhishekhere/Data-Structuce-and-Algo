#include<iostream>
using namespace std;

void sort(int a[], int length){
	for(int i = 0; i < length - 1; i++){
		for(int j = i+1; j < length; j++){
			if(a[i]>a[j]){
				int temp = a[i];
	            a[i] = a[j];
            	a[j] = temp;
			}
	   }
	}
}

int main(){
	int length;
	cin >> length;
	int a[length];
	
	for(int i = 0; i < length; i++){
		cin >> a[i];
	}
	
	for(int i = 0; i < length; i++){
		cout << a[i]<<" ";
	}
	cout<<"\nSorted array : "<<endl;
	sort(a, length);
	
	for(int i = 0; i < length; i++){
		cout << a[i] <<" ";
	}
	
	return 0;
}

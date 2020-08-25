#include<iostream>
using namespace std;

void printarray(int arr[], int size){
	
	for (int i = 0; i < size; i++){
		cout << arr[i] << " "; 
	}
  
    cout << endl; 
}

int main(){
	 int a[] = {1,2,3,4,5};
	 int b[] = {1,2,6};
	 
	 int size_a = sizeof(a)/sizeof(a[0]);
	 int size_b = sizeof(b)/sizeof(b[0]);
	 
	 cout << size_b <<endl;
	 
	 
	 int u_max_length = size_a + size_b;
	 int i_max_length = max(size_a, size_b);
	 
	 int union_arr[u_max_length], intersec_arr[i_max_length];
	 
	 int i = 0, j = 0, k = 0, l = 0;
	 while(u_max_length>0){
	 	if(a[i] < b[j] && i < size_a ){
	 		union_arr[k] = a[i];
	 		k++;
	 		i++;
		 }
		else if(a[i] > b[j] && j < size_b){
	 		union_arr[k] = b[j];
	 		k++;
	 		j++;
		 }
		 
		else if(a[i] == b[j] && i < size_a && j < size_b){
	 		union_arr[k] = b[j];
	 		intersec_arr[l] = b[j];
	 		k++;
	 		l++;
	 		i++;
	 		j++;
		 }
		
		u_max_length--;
		
		if (i >= size_a && j < size_b){
			union_arr[k] = b[j];
			k++;
			j++;
		}
		if (j >= size_b && i < size_a ){
			union_arr[k] = a[i];
			k++;
			i++;
		}
	 }
	 
	 cout << "Union of Array is: " <<endl;
	 printarray(union_arr, k);
	 
	 cout << "Intersection of Array is: " <<endl;
	 printarray(intersec_arr, l);
	 
	 return 0;
}

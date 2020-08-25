#include<iostream>
using namespace std;

int main(){
	int length;
	cin >> length;
	int a[length];
	
	for(int i = 0; i < length; i++){
		cin >> a[i];
	}
	
	int count_0 = 0, count_1 = 0, count_2 = 0; 
	
	for (int i = 0; i < length; i++) { 
        switch (a[i]) { 
        case 0: 
            count_0++; 
            break; 
        case 1: 
            count_1++; 
            break; 
        case 2: 
            count_2++;
            break; 
        } 
    } 
	
	int i = 0;
	
    while (count_0 > 0) { 
        a[i++] = 0; 
        count_0--; 
    } 
   
    while (count_1 > 0) { 
        a[i++] = 1; 
        count_1--; 
    } 
  
    while (count_2 > 0) { 
        a[i++] = 2; 
        count_2--; 
    } 
	
	for(int i = 0; i < length; i++){
		cout << a[i];
	}
	
	return 0;
}

#include<iostream>
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
	    int n1, n2, n3;
	    cin >> n1 >> n2 >> n3;
	    int a[n1],b[n2],c[n3];
	    
	    for(int j = 0; j < n1; j++){
	        cin >> a[j];
	    }
	    for(int j = 0; j < n2; j++){
	        cin >> b[j];
	    }
	    for(int j = 0; j < n3; j++){
	        cin >> c[j];
	    }
	 
	    bool flag = false;
        int m = 0, n = 0, o = 0;
	    while(m < n1 && n < n2 && o < n3){
		 
		if(a[m] == b[n] && a[m] == c[o]){
	 		cout << a[m] << " ";
	 		
	 		m++;
	 		n++;
	 		o++;
	 		flag = true;
		 }
		
		else if (a[m] < b[n]) 
             m++; 
  
        else if (b[n] < c[o]) 
             n++; 
   
        else
             o++; 
		
        }
        
        if ( !flag ){
            cout << -1;
        }
	     
	    cout<<endl;
    }
	return 0;
}
	 


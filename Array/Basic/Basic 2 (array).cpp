# include <iostream>
using namespace std;

int main(){
	int length, number, t;
	cin >> length;
	cin >> number;
	
	int *darray{ new int[length] {} };
	
	for(int i=0; i<length; i++){
		cin >> darray[i];
	}
	
	for(int i=0; i<length; i++){
		if (darray[i] == number)
		{
			t = 1;
			break;
		}
		else
		{
			continue;
		}
	}
	if (t == 1)
	{
		cout << "True" <<endl;
	}
	else
	{
		cout << "False" <<endl;
	}
	
	delete []darray;
	darray = NULL;
	
	return 0;
}

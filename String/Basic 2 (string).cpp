#include<iostream>
using namespace std;

void remove_w_space(char *ch){
	int count = 0;
	
	for(int i = 0; ch[i]; i++){
		if(ch[i] != ' '){
			ch[count++] = ch[i];
		}
	}
	ch[count++] = '\0';
}

int main(){
	char ch [] = "Hey abh is he k";
	remove_w_space(ch);
	cout<< ch <<endl;
	
	return 0;
}

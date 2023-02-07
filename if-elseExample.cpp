#include<iostream>
using namespace std; 
int main(){
	int num; 
	cout<<"Enter a number: ";
	cin>>num; 
	if(num!=0){
		if((num%2)==0){
			cout<<"You Entered a even number. \n";
		}
		else {
			cout<<"You Entered a odd number. \n";
		}
	}
	else {
		cout<<"You Entered 0 which is neither even nor odd number. "<<endl;
	}
	cout<<"This statement is always executed. ";
	return 0; 
}

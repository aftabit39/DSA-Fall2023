#include<iostream>
using namespace std; 
int main(){
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	
	if(num<0){
		cout<<"You entered a negative integer. "<<num<<endl; 
	}
	else{
		cout<<"You entered a positive integer. "<<num<<endl; 
	}
	cout<<"This statement always executes.";
	return 0;
}

#include<iostream>
using namespace std; 
int main(){
	
	int var=5; 
	int* nPtr = &var; 
	cout<<"Address of Variable is: "<<&var<<endl;
	cout<<"Contents of Pointer are: "<<nPtr; 
	return 0; 
}

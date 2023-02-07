#include<iostream>
#include<typeinfo>
using namespace std;

int main(){
	int x=10; 
	char ch='A';
	bool bl=0;
	float z=3.14;
	
	cout<<"Value of x is: "<<x<<endl;
	cout<<"Value of ch is: "<<ch<<endl;
	cout<<"Value of bl is: "<<bl<<endl;
	cout<<"Value of z is: "<<z<<endl; 
	
	cout<<"Type of x is: "<<typeid(x).name()<<endl;
	cout<<"Type of ch is: "<<typeid(ch).name()<<endl;
	cout<<"Type of bl is: "<<typeid(bl).name()<<endl;	
	cout<<"Type of z is: "<<typeid(z).name()<<endl;
	
	return 0;
}

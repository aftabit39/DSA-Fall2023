#include<iostream>
using namespace std; 
int count = 0; 
int n = 0; 

void display(int m[]){
	for(int i =0; i < n; i++)
		cout<<m[i]<<" ";
	
	cout<<endl;
}

void insertAtEnd(int m[]){
	
	cout<<"Enter the value: ";
	cin>>m[count];
	count++;
}

void length(void){
	cout<<"Length of the list is: "<<count<<endl	;
}

void insertAtK(int m[]){
	int val, k; 
	cout<<"Enter the value: ";cin>>val;
	cout<<"Enter the position: "; cin>>k; 
	
	for(int i=count; i>=k;i--)
		m[i]=m[i-1];
	m[k]=val;
	count++;
	
}
int main(){
	
	cout<<"Enter the size of the List: ";
	cin>>n; 
	int arr[n]={};
	display(arr);
	insertAtEnd(arr);
	display(arr);
	insertAtEnd(arr);
	display(arr);
	insertAtEnd(arr);
	display(arr);
	insertAtEnd(arr);
	display(arr);
	insertAtEnd(arr);
	display(arr);
	length();
	insertAtK(arr);
	display(arr);
	length();
	
	return 0; 
}

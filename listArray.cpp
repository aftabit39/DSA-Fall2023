#include<iostream>
using namespace std;

int size = 0;
int n = 0;

void insertAtEnd(int m[]){

    cout<<"Please Enter a value: ";
    cin>>m[size];
    size++;
}

void display(int m[]){
    for(int i=0; i < size; i++)
        cout<<m[i]<<" ";
}
int main(){
cout<<"Please Enter the size of array: ";
cin>>n;
int x[n];

insertAtEnd(x);
display(x);

return 0;
}

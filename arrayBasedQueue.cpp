#include<iostream>
using namespace std;
//this variable is for size of list
int count = 0;
int n = 0; // size of array


 bool isFull(void){
    if(count >= n)
        return true;
    else
        return false;
 }

 bool isEmpty(void){
    if(count==0)
        return true;
    else
        return false;
 }

void display(int m[]){
    for(int i = 0; i<n;i++)
        cout<<m[i]<<" ";
    cout<<endl;

}

void deQueueV1(int m[]){
    //int k;
    //cout<<"Enter the position: "; cin>>k;
   if(!isEmpty()){
    for(int i= 0; i < count; i++)
        m[i]=m[i+1];
    count--;
    }
    else
        cout<<"List is empty"<<endl;

}

void enQueueV1(int m[]){

    if(!isFull()){
        int val;
        cout<<"Enter the value: "; cin>>val;
         // cout<<"Enter the position: "; cin>>k;
        for(int i=count; i >= 0; i-- )
            m[i]= m[i-1];
        m[0]=val;
        count++;
        cout<<endl;
    }
    else
        cout<<"List is Full."<<endl;

}

void deleteAll(int m[]){
    if(isEmpty())
        cout<<"List is empty.";
    else{
        for(int i=0; i < count; i++)
            m[i]=0;
        count=0;
    }

}

int main(){
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n] = {};
    display(arr);
    enQueueV1(arr);
    enQueueV1(arr);
    enQueueV1(arr);
    display(arr);

    return 0;
}

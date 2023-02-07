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
// Insertion into the List 3 scenarios
void insertAtEnd(int m[]){
    int val;
    if(!isFull()){
    cout<<"Enter the value: ";
    cin>>val;
    m[count]=val;
    count++;
    } else
        cout<<"List is Full."<<endl;

}

void insertAtK(int m[]){
    if(!isFull()){
        int val, k;
        cout<<"Enter the value: "; cin>>val;
        cout<<"Enter the position: "; cin>>k;
        for(int i=count; i >= k; i-- )
            m[i]= m[i-1];
        m[k]=val;
        count++;
        cout<<endl;
    }
    else
        cout<<"List is Full."<<endl;

}

void insertAtZero(int m[]){

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
//Removing elements from list 3 scenarios
void deleteAtK(int m[]){
    if(!isEmpty()){
       int k;
       cout<<"Enter the position: "; cin>>k;
       for(int i= k; i < count; i++)
            m[i]=m[i+1];
       count--;
    }
    else
        cout<<"List is Empty"<<endl;

}

void deleteAtZero(int m[]){
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

void deleteAll(int m[]){
    if(isEmpty())
        cout<<"List is empty.";
    else{
        for(int i=0; i < count; i++)
            m[i]=0;
        count=0;
    }

}

// Searching the list

void searchList(int m[]){
    int val;
    bool found=false;

    if(!isEmpty()){
        cout<<"Please enter a value to search: "; cin>>val;
        for(int i=0; i < count; i++ )
            if(m[i]==val){
                found = true;
                break;
               }
    }
    if(found == true)
        cout<<"Value has been found. ";
    else
        cout<<"Value did not found. ";
}

void searchListPos(int m[]){
    int val;
    bool found=false;
    int pos = 0;

    if(!isEmpty()){
        cout<<"Please enter a value to search: "; cin>>val;
        for(int i=0; i < count; i++ )
            if(m[i]==val){
                found = true;
                pos = i;
                break;
               }
    }
    if(found == true)
        cout<<"Value has been found at array index "<<pos<<".";
    else
        cout<<"Value did not found. ";
}

void searchListRepeat(int m[]){
    int val;
    bool found=false;
    int counter = 0;

    if(!isEmpty()){
        cout<<"Please enter a value to search: "; cin>>val;
        for(int i=0; i < count; i++ )
            if(m[i]==val){
                found = true;
                counter++;

               }
    }
    if(found == true)
        cout<<"Value has been found "<<counter<<" times.";
    else
        cout<<"Value did not found. ";
}

void searchReplaceList(int m[]){
    int val;
    int repVal;
    bool found=false;

    if(!isEmpty()){
        cout<<"Please enter a value to search: "; cin>>val;
        for(int i=0; i < count; i++ )
            if(m[i]==val){
                cout<<"Please enter the value to replace: ";cin>>repVal;
                m[i]= repVal;
                found = true;
                break;
               }
    }
//    if(found == true)
//        cout<<"Value has been found. ";
//    else
//        cout<<"Value did not found. ";
}

int main(){
        cout<<"Enter the size of array: ";
        cin>>n;
        int arr[n] = {};
    display(arr);
     cout<<"The size of list is:"<<count<<endl;
    cout<<"The number of vacant positions are:"<<n-count<<endl;
    insertAtEnd(arr);
    insertAtEnd(arr);
    insertAtEnd(arr);
    insertAtEnd(arr);
    insertAtEnd(arr);
    display(arr);
   // deleteAtK(arr);
    //cout<<"List after deletion of all elements."<<endl;
    //display(arr);
//    cout<<"The size of list is:"<<count<<endl;
//    cout<<"The number of vacant positions are:"<<n-count<<endl;
    searchReplaceList(arr);
    display(arr);

return 0;
}

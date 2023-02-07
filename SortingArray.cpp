#include<iostream>
using namespace std;

void inputArray (int a[], int n);
void displayArray(int a[],int n);
void sortArrayM1(int a[], int n);

int main(){
    int n, min, temp;
    cout<<"Enter the size of array: ";cin>>n;
    int a[n];

   inputArray(a,n);

    cout<<"Unsorted Array.\n";
    displayArray(a,n);

    for (int j = 0; j < n - 1; j++) {
      //min = j;
      for (int k = j + 1; k < n; k++)
         if (a[j] < a[k]){
        //    min = k;
            temp = a[j];
            a[j] = a[k];
            a[k] = temp;
         }
   }

    cout<<"\nSorted Array.";
    displayArray(a,n);



return 0;
}

void inputArray (int a[], int n){
    for(int i=0; i<n; i++){
        cout<<"Enter value for "<<i+1<<" element.";cin>>a[i];
    }
}

void displayArray(int a[], int n){
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
}



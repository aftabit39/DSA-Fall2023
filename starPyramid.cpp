#include<iostream>
using namespace std;

int main(){

    int nRows;

    cout<<"Enter the number of rows:";
    cin>>nRows;

    for(int i = 1; i <= nRows; i++){
        for(int s = i; s < nRows; s++)
            cout<<" ";
        for(int j =  1; j <= (2*i-1); j++)
            cout<<"*";
        cout<<endl;
    }


return 0;
}

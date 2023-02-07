#include<iostream>
#include<cstdlib>
using namespace std;

void addTwoNums(void);
void subTwoNums(void);
void mulTwoNums(void);
void divTwoNums(void);
char options(void);

int main(){
    cout<<"This is a dummy statement.";
    //int x, y;
    char ch;
    ch = options();

    while (ch != 'x'){

        switch(ch){
            case 'a': addTwoNums();
            break;
            case 's': subTwoNums();
            break;
            case 'm': mulTwoNums();
            break;
            case 'd': divTwoNums();
            break;
            default: cout<<"Invalid Input";
            break;
        }
         ch=options();

    }

return 0;
}

void addTwoNums(void){
    int x, y;
    cout<<"Enter value of x: ";cin>>x;
    cout<<"Enter value of y: ";cin>>y;
    cout<<"Sum of "<<x<<" and "<<y<<" is: "<<x+y<<endl;
    system("pause");
}

void subTwoNums(void){
    int x, y;
    cout<<"Enter value of x: ";cin>>x;
    cout<<"Enter value of y: ";cin>>y;
    cout<<"Difference of "<<x<<" and "<<y<<" is: "<<x-y<<endl;
    system("pause");
}

void mulTwoNums(void){
    int x, y;
    cout<<"Enter value of x: ";cin>>x;
    cout<<"Enter value of y: ";cin>>y;
    cout<<"Product of "<<x<<" and "<<y<<" is: "<<x*y<<endl;
    system("pause");
}

void divTwoNums(void){
    int x, y;
    cout<<"Enter value of x: ";cin>>x;
    cout<<"Enter value of y: ";cin>>y;
    cout<<"Division of "<<x<<" and "<<y<<" is: "<<x/y<<endl;
    system("pause");
}

char options(void){
    char ch;
    system("CLS");
    cout<<"To add two numbers enter      a \n";
    cout<<"To subtract two numbers enter s \n";
    cout<<"To multiply two numbers enter m \n";
    cout<<"To divide two numbers enter   d \n";
    cout<<"To exit the program, enter    x \n";
    cout<<"Please Enter Your Option: ";
    cin>>ch;
    return ch;
}




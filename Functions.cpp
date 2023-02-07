#include<iostream>
using namespace std;

void func1(void);
void func2(int, int);
int func3(int, int);

int main(){

    func1();
    func2(2,3);

return 0;
}

void func1(void){
    cout<<"This function has been called.";
}

void func2(int a, int b){
    int c;

    c = a+b;

    cout<<"Sum of "<<a<<" and "<<b<<" is "<<c;
}


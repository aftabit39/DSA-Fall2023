#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){

    int num, guess, tries=0;

    srand(time(0));
    num = rand()%100+1;

    cout<<"Number Guessing Game.\n\n";
    do{
        cout<<"Enter your guess: ";
        cin>>guess;
        tries++;
        if(guess > num)
            cout<<"Guess is too high. \n";
        else if(guess < num)
            cout<<"Guess is too low. \n";
        else
            cout<<"Correct !!! You guessed in "<<tries<<" tries";

    }while(guess!=num);

return 0;
}

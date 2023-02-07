#include <iostream>

using namespace std;

int main()
{
    const int a = 5, b = 4, c = 8;
    switch (true)
    {
        case (a < 5):
            cout << "A";
            break;
        case (b < 5):
            cout << "B";
            break;
        /*
        case (c < 5):
            cout << "C";
            break;
        */
        default:
            cout << "None";
            break;
    }
}

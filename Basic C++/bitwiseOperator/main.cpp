#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 6;

    // a = a << 2 ;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << a << endl;
    cout << b << endl;
    return 0;
}
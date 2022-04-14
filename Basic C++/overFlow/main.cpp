#include <iostream>
using namespace std;

int main()
{

    char a = 128; /// overflow  : char (-128 to 127)
    cout << (int)a << endl;

    return 0;
}
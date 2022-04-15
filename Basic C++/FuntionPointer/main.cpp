#include <iostream>

using namespace std;

int add (int x, int y)
{
    return x+y;
}

int sub (int x, int y)
{
    return x-y;
}

void display ()
{
    cout << "Hello world!" << endl;
}
int main()
{
    void (*fP)(); /// Declearation of pointer
    fP = display; /// Initialization of pointer
    (*fP)();      /// Funtion Call


    int (*ffp)(int,int);
    ffp = add;
    cout << (*ffp)(5,6) << endl;
                                    /// runtime polyma
    ffp = sub;
    cout << (*ffp)(5,6) << endl;

    return 0;
}

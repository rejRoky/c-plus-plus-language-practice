#include <iostream>

using namespace std;

template <class T>
T maxin (T x, T y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int main()
{

    int a = maxin(5,6);
    float b = maxin (2.5f,5.3f);

    cout << a << endl;
    cout << b << endl;
    return 0;
}

#include <iostream>

using namespace std;

int* fun (int size)
{
    int *p = new int [size]; /// created a array at heap
    for (int i = 0; i < size; i ++)
        p[i]= i+1;
    return p;
}

int main()
{
    int *ptr = fun(5); /// pointed same location of p
    for (int i = 0; i < 5; i++)
    {
        cout << ptr[i] << endl;
    }
    return 0;
}

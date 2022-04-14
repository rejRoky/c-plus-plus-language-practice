#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int sum = 5;

    // sum = sum + a ;
    sum += a; // compoundAssignmentOperator
    cout << "Sum : " << sum << endl;

    sum -= a + a + a;
    cout << "Sum : " << sum << endl;

    return 0;
}

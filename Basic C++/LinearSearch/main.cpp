#include <iostream>

using namespace std;

int main()
{
    int A [5], n = 5;
    cout << "Enter 5  Number : " << endl;
    for (int i = 0 ; i < n ; i ++)
    {
        cin >> A[i];
    }

    int keyword;
    cout << "Enter Number what you want to search: ";
    cin >> keyword;

    for (int i = 0 ; i < n ; i ++)
    {
        if (keyword == A[i])
            cout << "Numder is found at " << i +1 << " position" << endl;

    }



    return 0;
}

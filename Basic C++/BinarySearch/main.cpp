#include <iostream>

using namespace std;

int main()
{

    int numArray[7] = {5,10,15,20,25,30,35};
    int n = 7;
    int key;

    cout << "Key to be searched= "<< endl;
    cin >> key;

    int first = 0;
    int last=n-1;
    int mid = (first + last)/2;

    while( first <= last )
    {

        if ( numArray[mid] < key )
        {
            first = mid + 1;
        }
        else if ( numArray[mid] == key )
        {

            cout << "Element is found at index: "<< + mid << endl;
            break;
        }
        else
        {

            last = mid - 1;
        }
        mid = (first + last)/2;
    }

    if ( first > last )
    {
        cout << "Element is not found!" << endl;
    }

    return 0;
}

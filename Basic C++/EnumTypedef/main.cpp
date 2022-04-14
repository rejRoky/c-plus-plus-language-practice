#include <iostream>

using namespace std;

enum day {mon = 1, tue, wed, thus, fri = 10, sat, sun};

typedef string name ;
typedef int id;  // for readability

int main()
{
    cout << mon << endl;
    cout << tue  << endl;
    cout << wed << endl;
    cout << thus << endl;
    cout << fri << endl;
    cout << sat << endl;
    cout << sun << endl;

    name roky = "Roky"; // for readability
    id idRoky = 121; // for readability

    cout << roky << endl;
    cout << idRoky << endl;



    return 0;
}

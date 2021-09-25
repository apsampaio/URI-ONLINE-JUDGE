#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{

    int input;

    cin >> input;

    map<int, string> ddd {
        { 1, "January" },
        { 2, "February" },
        { 3, "March" },
        { 4, "April" },
        { 5, "May" },
        { 6, "June" },
        { 7, "July" },
        { 8, "August" },
        { 9, "September" },
        { 10, "October" },
        { 11, "November" },
        { 12, "December" }
    };

    cout << ddd[input] << endl;

    return 0;
}
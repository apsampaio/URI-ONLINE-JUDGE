#include <iostream>
#include <string>

using namespace std;

int main()
{

    string input;

    getline(cin, input);

    input.size() > 80
        ? cout << "NO" << endl
        : cout << "YES" << endl;

    return 0;
}
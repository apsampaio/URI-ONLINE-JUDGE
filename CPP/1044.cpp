#include <iostream>

using namespace std;

int main()
{

    int a, b;

    cin >> a >> b;

    int result = (a > b)
        ? (a % b)
        : (b % a);

    result
        ? cout << "Nao sao Multiplos\n"
        : cout << "Sao Multiplos\n";

    return 0;
}
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{

    int input;

    cin >> input;

    map<int, string> ddd {
        { 61, "Brasilia" },
        { 71, "Salvador" },
        { 11, "Sao Paulo" },
        { 21, "Rio de Janeiro" },
        { 32, "Juiz de Fora" },
        { 19, "Campinas" },
        { 27, "Vitoria" },
        { 31, "Belo Horizonte" }
    };

    if (ddd.count(input) > 0)
        cout << ddd[input] << endl;
    else
        cout << "DDD nao cadastrado" << endl;

    return 0;
}
#include <iostream>
#include <string>

using namespace std;

// 0 = Empate!
// 1 = Bazinga!
// 2 = Rag trapaceou!

int rockPaperScissorsLizardSpock(string a, string b)
{
    int result = 0;

    if (a == "tesoura") {
        if (b == "papel")
            result = 1;
        else if (b == "lagarto")
            result = 1;

        else if (b == "Spock")
            result = 2;
        else if (b == "pedra")
            result = 2;

        else if (b == "tesoura")
            result = 0;
    }

    else if (a == "papel") {
        if (b == "pedra")
            result = 1;
        else if (b == "Spock")
            result = 1;

        else if (b == "lagarto")
            result = 2;
        else if (b == "tesoura")
            result = 2;

        else if (b == "papel")
            result = 0;
    }

    else if (a == "pedra") {
        if (b == "lagarto")
            result = 1;
        else if (b == "tesoura")
            result = 1;

        else if (b == "Spock")
            result = 2;
        else if (b == "papel")
            result = 2;

        else if (b == "pedra")
            result = 0;
    }

    else if (a == "lagarto") {
        if (b == "Spock")
            result = 1;
        else if (b == "papel")
            result = 1;

        else if (b == "tesoura")
            result = 2;
        else if (b == "pedra")
            result = 2;

        else if (b == "lagarto")
            result = 0;
    }

    else if (a == "Spock") {
        if (b == "pedra")
            result = 1;
        else if (b == "tesoura")
            result = 1;

        else if (b == "papel")
            result = 2;
        else if (b == "lagarto")
            result = 2;

        else if (b == "Spock")
            result = 0;
    }

    return result;
}

int main()
{

    int plays;
    cin >> plays;

    int* results = new int(plays);

    for (int i = 0; i < plays; i++) {
        string a, b;
        cin >> a >> b;
        results[i] = rockPaperScissorsLizardSpock(a, b);
    }

    for (int i = 0; i < plays; i++) {
        switch (results[i]) {
        case 0:
            cout << "Caso #" << (i + 1) << ": De novo!" << endl;
            break;
        case 1:
            cout << "Caso #" << (i + 1) << ": Bazinga!" << endl;
            break;
        case 2:
            cout << "Caso #" << (i + 1) << ": Raj trapaceou!" << endl;
            break;
        default:
            cout << "Default Case" << endl;
        }
    }

    return 0;
}
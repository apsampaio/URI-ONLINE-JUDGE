#include <iostream>

using namespace std;

int main()
{

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int start = a * 60 + b;
    int end = c * 60 + d;

    int time = end - start;

    if (time == 0) {
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
        return 0;
    } else if (time < 0) {
        time = 24 * 60 + time;
    }

    int hours = time / 60;
    int minutes = time % 60;

    cout << "O JOGO DUROU " << hours << " HORA(S) E " << minutes << " MINUTO(S)" << endl;

    return 0;
}
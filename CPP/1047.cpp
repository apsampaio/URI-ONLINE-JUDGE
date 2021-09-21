#include <iostream>

using namespace std;

int main()
{

    int start, start_minute, end, end_minute;
    //cin >> start >> start_minute >> end >> end_minute;

    int list[4] = { 10, 12, 12, 10 };

    start = list[0];
    start_minute = list[1];
    end = list[2];
    end_minute = list[3];

    if (start == end && start_minute == end_minute) {
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n";
    } else {
        int hours = (start > end)
            ? (24 - start) + end
            : end - start;

        int minutes = (start_minute > end_minute)
            ? start_minute - end_minute
            : end_minute - start_minute;

        if (hours == 1 && start_minute > end_minute) {
            hours -= 1;
            minutes = 60 - minutes;
        } else if (hours == 0 && start_minute > end_minute) {
            hours = 23;
            minutes = 60 - minutes;
        }

        cout << "O JOGO DUROU " << hours << " HORA(S) E " << minutes << " MINUTO(S)\n";
    }

    return 0;
}
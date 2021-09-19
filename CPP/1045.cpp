#include <algorithm>
#include <iostream>

using namespace std;

int main()
{

    float x, y, z;

    cin >> x >> y >> z;

    float list[3] = { x, y, z };

    sort(begin(list), end(list));
    reverse(begin(list), end(list));

    float A = list[0];
    float B = list[1];
    float C = list[2];

    if (A >= (B + C)) {
        cout << "NAO FORMA TRIANGULO\n";
        return 0;
    }

    if (A * A == (B * B + C * C))
        cout << "TRIANGULO RETANGULO\n";

    if (A * A > (B * B + C * C))
        cout << "TRIANGULO OBTUSANGULO\n";

    if (A * A < (B * B + C * C))
        cout << "TRIANGULO ACUTANGULO\n";

    if (A == B && B == C)
        cout << "TRIANGULO EQUILATERO\n";

    if ((A == B && A != C) || (A == C && A != B) || (B == C && B != A))
        cout << "TRIANGULO ISOSCELES\n";

    return 0;
}
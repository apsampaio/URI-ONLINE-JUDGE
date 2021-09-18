#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float A, B, C;

    cin >> A >> B >> C;

    float delta = (pow(B, 2)) - (4 * A * C);

    float R1 = (-B + sqrt(delta)) / (2 * A);
    float R2 = (-B - sqrt(delta)) / (2 * A);

    if (isnan(R1) || isnan(R2)) {
        cout << "Impossivel calcular\n";
    } else {
        std::cout.precision(5);
        cout << std::fixed;
        cout << "R1 = " << R1 << "\n";
        cout << "R2 = " << R2 << "\n";
    }

    return 0;
}
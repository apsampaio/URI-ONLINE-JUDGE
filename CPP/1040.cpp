#include <iostream>

using namespace std;

int main()
{
    cout.precision(1);
    cout << std::fixed;

    float a, b, c, d;

    cin >> a >> b >> c >> d;
    float average = ((a * 2) + (b * 3) + (c * 4) + (d * 1)) / 10;

    cout << "Media: " << average << "\n";

    if (average >= 7.0) {
        cout << "Aluno aprovado.\n";
    } else if (average < 5.0) {
        cout << "Aluno reprovado.\n";
    } else {
        cout << "Aluno em exame.\n";

        float exam;
        cin >> exam;

        cout << "Nota do exame: " << exam << "\n";

        float final_average = (exam + average) / 2;

        final_average >= 5.0
            ? cout << "Aluno aprovado.\n"
            : cout << "Aluno reprovado.\n";

        cout << "Media final: " << final_average << "\n";
    }

    return 0;
}
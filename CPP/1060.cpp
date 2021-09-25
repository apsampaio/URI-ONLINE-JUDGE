#include <iostream>

using namespace std;

int main()
{

    float a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    float list[6] = { a, b, c, d, e, f };
    int count = 0;
    for (int i = 0; i < 6; i++) {
        if (list[i] >= 0)
            count++;
    }

    cout << count << " valores positivos" << endl;

    return 0;
}
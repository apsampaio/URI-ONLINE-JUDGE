#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    int a, b, r, q;

    cin >> a >> b;

    q = a / b;
    r = a - b * q;

    if (r < 0) {
        r = fabs(b) - r;
        q = (a - r) / b;
    }

    cout << q << " " << r << endl;

    return 0;
}
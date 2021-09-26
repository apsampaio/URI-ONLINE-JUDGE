#include <iostream>
#include <string>

using namespace std;

int main()
{
    string trash;

    int start;
    // A - HOURS | B - MINUTES | C - SECONDS
    int a, b, c;

    cin >> trash >> start;
    cin >> a >> trash >> b >> trash >> c;

    int end;
    // X - HOURS | Y - MINUTES | Z - SECONDS
    int x, y, z;

    cin >> trash >> end;
    cin >> x >> trash >> y >> trash >> z;

    // Days
    int days = ((end - start) - 1) * 24 * 3600;

    // Start Day in seconds
    int time = (24 - a) * 3600;
    time += b * 60;
    time += c;

    return 0;
}
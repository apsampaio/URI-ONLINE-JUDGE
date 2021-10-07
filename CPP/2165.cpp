#include <iostream>
#include <string>

using namespace std;

int main()
{

    string text;
    getline(cin, text);

    if (text.size() > 140) {
        cout << "MUTE" << endl;
    } else {
        cout << "TWEET" << endl;
    }

    return 0;
}
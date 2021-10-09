#include <iostream>

using namespace std;

// FIXME RUNTIME

int main()
{

    ios::sync_with_stdio(false);

    unsigned long int max_stars, value;

    cin >> max_stars;
    unsigned long int* stars = new unsigned long int(max_stars);
    bool* visited = new bool(max_stars);

    unsigned long int total_sheeps = 0;

    for (unsigned long int i = 0; i < max_stars; i++) {
        unsigned long int input;
        cin >> input;

        stars[i] = input;
        total_sheeps += input;

        visited[i] = false;
    }

    unsigned long int position = 0;

    while (position < max_stars || position >= 0) {
        unsigned long int star_sheeps = stars[position];

        if (star_sheeps) {
            stars[position] = star_sheeps - 1;
            visited[position] = true;
            total_sheeps--;
        }

        // next star
        star_sheeps % 2
            ? position++
            : position--;
    }

    unsigned long int total_visited = 0;

    for (unsigned long int i = 0; i < max_stars; i++)
        if (visited[i])
            total_visited++;

    cout << total_visited << " " << total_sheeps << endl;

    return 0;
}
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{

    string a, b, c;

    cin >> a >> b >> c;

    map<string, map<string, map<string, string>>> name;
    map<string, map<string, string>> subfilo;
    map<string, string> classe;

    map<string, string> ave { { "carnivoro", "aguia" }, { "onivoro", "pomba" } };
    map<string, string> mamifero { { "onivoro", "homem" }, { "herbivoro", "vaca" } };
    map<string, string> inseto { { "hematofago", "pulga" }, { "herbivoro", "lagarta" } };
    map<string, string> anelideo { { "hematofago", "sanguessuga" }, { "onivoro", "minhoca" } };

    subfilo.emplace("mamifero", mamifero);
    subfilo.emplace("ave", ave);
    subfilo.emplace("inseto", inseto);
    subfilo.emplace("anelideo", anelideo);

    name.emplace("vertebrado", subfilo);
    name.emplace("invertebrado", subfilo);

    cout << name[a][b][c] << endl;

    return 0;
}
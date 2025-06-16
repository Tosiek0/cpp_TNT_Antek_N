#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> liczby;
    int liczba;

    cout << "Podaj liczby (jeśli podasz zero program wyświetli ich sume)" << endl;
    while(true) 
    {
        cin >> liczba;
        if (liczba == 0)
        break;
        liczby.push_back(liczba);
    }

    int suma = 0;
    for (int i : liczby)
    {
        suma += i;
    }

    cout << "Suma podanych liczb to: " << suma << endl;
    return 0;
}

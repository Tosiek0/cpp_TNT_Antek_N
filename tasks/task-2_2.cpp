#include <iostream>
using namespace std;

int liczba;

bool czyParzysta(int liczba) 
{
    if (liczba % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cout << "Podaj liczbe: ";
    cin >> liczba;

    cout << czyParzysta(liczba) << endl;
    return 0;
}
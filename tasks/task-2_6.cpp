#include <iostream>
using namespace std;

int main()
{
    int oceny[5];
    int suma = 0;

    cout << "Podaj 5 ocen: " << endl;
    for(int i = 0; i<5; i++)
    {
        cin >> oceny[i];
        suma += oceny[i];
    }

    float srednia = suma / 5.0;
    cout << "Średnia ocen: " << srednia << endl;

    return 0;
}
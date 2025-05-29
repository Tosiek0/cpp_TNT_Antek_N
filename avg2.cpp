#include <iostream>
using namespace std;

float avg_count(float tablica[], int size)
{
    float suma = 0;
    for (int i = 0; i < size; i++) {
        cout << tablica[i] << "; ";
    }
    cout << endl;

    for (int i = 0; i < size; i++) {
        suma += tablica[i];
    }

    return suma / size;
}

int main()
{
    float tablica[10] = {0.5, 1.2, 2.4, 3.8, 4.6, 5.0, 6.3, 7.7, 8.1, 9.9};
    int size = sizeof(tablica) / sizeof(float);
    float avg = avg_count(tablica, size);
    cout << "Srednia: " << avg << endl;
    return 0;
}
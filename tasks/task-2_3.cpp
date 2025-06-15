#include<iostream>
using namespace std;

int n;
int silnia(int n)
{
    if (n < 0)
    {
        return 0;
    }
    int wynik = 1;
    for (int i = 1; i <= n; i++)
        wynik *= i;
    return wynik;
}

int main()
{
    cout << "Podaj liczbę do obliczenia silni: " << endl;
    cin >> n;
    cout << silnia(n) << endl;

}

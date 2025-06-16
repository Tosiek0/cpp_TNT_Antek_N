#include<iostream>
using namespace std;

class Licznik 
{
private:
    int _wartosc;
public:
    Licznik() : _wartosc(0) {}

    void zwieksz(int n)
{
    _wartosc += n;
}

        void zmniejsz(int n)
{
    _wartosc -= n;
}

int pokaz_wartosc() 
{
    return _wartosc;
}

};

int main()
{
    Licznik l;
    l.zwieksz(3);
    l.zwieksz(5);
    l.zmniejsz(2);

    cout << "Wartość licznika:" << l.pokaz_wartosc() << endl;
    return 0;
}
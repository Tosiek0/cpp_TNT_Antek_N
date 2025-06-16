#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    int liczba;

    vector<int> liczby;

    cout << "Ile liczb chcesz podać: ";
    cin >> n;

    cout << "Podaj " << n << " liczb: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> liczba;
        liczby.push_back(liczba);
    } 

    cout << "Podane liczby w odwrotnej kolejności: " << endl;
    for (int i = n - 1; i >= 0; i--)
    {
        cout << liczby[i] << " ";
    } 
    cout << endl;
    return 0;
} 
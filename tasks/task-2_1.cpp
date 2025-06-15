#include <iostream>
using namespace std;

float waga;
float wzrost;
int main()
{
    cout << "Podaj wagę (w kg): " << endl;
    cin >> waga;
    cout << "Podaj wzrost (w metrach): " << endl;
    cin >> wzrost;
    float bmi = waga / (wzrost * wzrost);
    cout << "BMI: " << bmi << endl;
}

#include <iostream>
#include <vector>
using namespace std;

class Student
{
private:
    string _imie;
    int _wiek;

public:
    Student(const string &imie, int wiek) : _imie(imie), _wiek(wiek) {}

    void print()
    {
        cout << _imie << " " << _wiek << endl;
    }
};

int main()
{
    Student s1("Adam", 24);
    Student s2("Krzyś", 17);
    Student s3("Maks", 16);

    vector<Student> students;

    students.push_back(s1);
    students.push_back(s2);
    students.push_back(s3);

    cout << "Lista studentów: " << endl;
    
    for (Student& s : students)
    {
        s.print();
    }
}
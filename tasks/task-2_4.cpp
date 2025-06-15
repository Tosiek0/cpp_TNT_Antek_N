#include<iostream>
using namespace std;

class Point2D
{
private:
    float _x;
    float _y;

public:
    Point2D(float x, float y) : _x(x), _y(y){}

    void showpoints()
    {
        cout << _x << " " << _y << endl;
    }
};

int main()
{
    Point2D p(5.6, 4.2);
    p.showpoints();

    return 0;
}
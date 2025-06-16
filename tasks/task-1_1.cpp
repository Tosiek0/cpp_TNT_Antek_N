#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>
#include <algorithm>
using namespace std;

class Statystyka
{
private:
    vector<float> _data;

    float sum()
    {
        return accumulate(_data.begin(), _data.end(), 0.0f);
    }

public:
    void setOneData(float d)
    {
        _data.push_back(d);
    }

    float getMean()
    {
        if (_data.empty())
            throw runtime_error("cannot calculate mean of an empty dataset.");

        return sum() / _data.size();
    }

    float getStandardDeviation()
    {
        if(_data.empty())
           throw runtime_error("cannot calculate standard deviation of an empty dataset."); 

        float mean = getMean();
        float sumSquares = 0.0f;

        for (float x : _data)
            sumSquares += (x - mean) * (x - mean);
        
        return sqrt(sumSquares / _data.size());
    }

    float getMedian()
    {
        if(_data.empty())
           throw runtime_error("cannot calculate median of an empty dataset.");

    sort(_data.begin(), _data.end());

        size_t n = _data.size();
        if (n % 2 == 1)
        {
            return _data[n / 2];
        }
        else
        {
            return (_data[n / 2 - 1] + _data[n / 2]) / 2.0f;
        }
    }
};

int main()
{
    Statystyka s;

    s.setOneData(1.2f);
    s.setOneData(2.8f);
    s.setOneData(3.0f);

    cout << "Średnia: " << s.getMean() << endl;
    cout << "Odchylenie standardowe: " << s.getStandardDeviation() << endl;
    cout << "Mediana: " << s.getMedian() << endl;

    return 0;
}

#include <iostream>

#define ARR_SIZE 10

/*
int countArrSize(float *arr)
{
    int size = sizeof(arr) / sizeof(arr[0]); 
    return size;
}
*/


void menu(int size)
{
    std::string value;
    while(true) 
    {
        std::cin >> key_value;

    }
}


float count_avg(float arr[], int size)
{
    int arrSize = size; //countArrSize(arr);
    std::cout << "arr size = " << arrSize << std::endl;

    float sum = 0.0;
    for (int i = 0; i < arrSize; i++)
    {
        sum += arr[i];
    }

    return sum / arrSize;
}

int main()
{
    float arr[ARR_SIZE] = {0.5, 1.2, 2.4, 3.8, 4.6, 5.0, 6.3, 7.7, 8.1, 9.9};

    int size = sizeof(arr) / sizeof(arr[0]); 

    // 1. Show array
    for (int i = 0; i < size; i++)
    {
        std::cout << " " << arr[i];
    }
    std::cout << std::endl;
    // 2. Calculate
    float avg = count_avg(arr, size);
    // 3. Show result of avg
    std::cout << " AVG = " << avg << std::endl;

    return 0;
}

#undef ARR_SIZE
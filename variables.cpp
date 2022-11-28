#include <iostream>

using namespace std;


int main()
{
    int a = 5; //integer
    int b = 3;
    int c = a + b;

    bool isLong = true; // boolean
    bool isShort = false;

    bool isLongAndShort = isLong && isShort; // true == 0 and false == 1
    bool isLongOrShort = isLong || isShort;


    double e = 0.4; // double and float are almost the same (use double most of the time)
    float f = 0.4;

    cout << "Hello world" << isLongAndShort;
    return 0;
}
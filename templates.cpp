#include <iostream>

using namespace std;

// we can use templates if we want our functions to accepts multiple data types;
template <class T>
T multiply(T a , T b){
    return a * b;
}

int main()
{
    cout << multiply(3,4);
    cout << multiply(3.2,4.9);
    return 0;
}   
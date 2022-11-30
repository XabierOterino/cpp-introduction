#include <iostream>

using namespace std;

// we can create our own data type 
typedef double height;

struct HomoSapiens{
    string name;
};

typedef HomoSapiens Person;


int main()
{

    height ivanHeight = 191.5;
    cout << ivanHeight;

    Person man = {"Michael"};

}
#include <iostream>

using namespace std;

void printHello(){
    string helloString = "HEllo!";
    cout << helloString;
}


int main(){
    printHello();
    // cout << helloString; // will fail
    return 0;
}


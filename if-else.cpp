#include <iostream>

using namespace std;


int main(){
    int number = 0;
    cout << "Please input a number: " << endl;
    cin >> number;

    if(number <= 10){
        cout << "Your number is LESS than 10";
    }
    else if(number > 10 && number <= 20){
        cout << "Your number is BETWEEN 10 and 20";
    }
    else{
        cout << "Your number is greater than 20";
    }

}
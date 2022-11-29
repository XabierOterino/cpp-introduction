#include <iostream>

using namespace std;

int setNumber(){
    int n;
    cout << "P1: Pick a random number";
    cin >> n;
    return n;
}

int guessNumber(){
    int guess;
    cout << "P2: Guess the number";
    cin >> guess;
    return guess;
}


int main(){
    int secretNumber = setNumber();
    while(guessNumber()!= secretNumber){
        guessNumber();
    } 
    cout << "P2 WINS!!";
}


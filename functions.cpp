#include <iostream>
void printB(int x){
    std::cout << x;
}

void printA(){
    printB(2);
    std::cout << "HELLO";
}

int add(int x , int y){
    int z = x + y;
    return z; 
}

string createGreeting(string name){
    return "Greetings" + name;
}


main(){

    printA();
    printB(add(2,6));   
    return 0;
    
}

// NESTED FUNCTIONS(FUNCTION DECLARATIONS FUNCTIONS) AREN'T SUPPORTED


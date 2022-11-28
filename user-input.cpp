#include <iostream>
#include <string>

using namespace std;

int main() {
    /* The direction of the arrows have a meaning, it poiints to the left when its and output and right in input */
    string name  = ""; 
    cout << "What is your name ?" << endl;
     // cin  >> name; // c in => input
    getline(cin,name);
    cout << "Hello world" << name << endl;

    int age = 0;
    cout << "How old are you?";
    cin >> age;
    cout << "That means you are " << age << "years old" << endl;

    return 0;
}
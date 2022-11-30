#include <iostream>

using namespace std;

class Person {
    private:
        // everything to keep private must be declared here
        int height;
        string name;
        int age ;
        string gender;
    
    public :
        //constructor
        Person(string _name, int _age , string _gender){
            name = _name;
            age = _age;
            gender = _gender;
        }
        // we can add more than one type of constructor for different use cases
        Person(){
            name = "no_name";
            age = 99;
            gender = "male";

            // we can add new variables
            height = 100;
        }

        void setAge(int a){
            if(a >0){
                age  = 0;
            }
        }

        void printInfo(){
            cout << name;
        }
};


int main()
{
    // objects are instances of classes or structs
    Person ivan = Person("Ivan", 20, "Male"); 
    // we can initialize the class in multiple ways
    Person michael = Person();
    ivan.printInfo();
    return 0;
}
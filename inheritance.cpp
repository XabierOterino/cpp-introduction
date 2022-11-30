#include <iostream>

using namespace std;

class Person {
    protected : // if we set it private classes that inherit wont be able to read the values
        string name;
        int age;

    public:
        Person(string n, int a){
            name = n;
            age = a;
        }
        Person(){
            name = "undefined";
            age = 0;
        }
    
        string getName(){
            return name;
        }

        int getAge(){
            return age;
        }

        void setName(string n){
            if(n!=""){
                name = n;
            }
        }
        void setAge(int a){
            if(a > 0  && a <120){
                age = a;
            }
        }

};

// inheritance
class Employee : public Person{
    private:
        string job;
    public :
        Employee(string n , int a, string j) : Person(n,a){
            job  = j;
        }
        string getJob(){
            return job;
        }

};


int main()
{
    Employee worker  = Employee("Adam", 30, "programmer");
    cout << worker.getJob();
}
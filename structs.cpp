#include <iostream>

using namespace std;

enum skin{
    soldier,
    sorcerer,
    healer
};

struct user {
    string name;
    string gender;
    int age;
    int level;
    skin character;
};

void getInfo(user u){
    cout << "Name : " << u.name << endl;
    cout << "Character : " << u.character << endl;
    cout << "Level : " << u.level << endl;
}


int main(){
   user users[]{};
   user ivan;
   ivan.name = "Ivan";
   ivan.gender = "Male";
   ivan.age = 20;
   ivan.level = 1;
   ivan.character = soldier;
   users[0] = ivan;

   user michael = {"Michael", "Male", 12, 32, sorcerer}; // easier way to initialize a variable
   users[1] = michael;


   return 0;

}




#include <iostream>


// namespaces are some kind of boxes where we can put functions inside 

namespace awesomeNamespace{
    void greeting(){
        std::cout << "Hello!";
    }
}

namespace amazingNamespace{
    void greeting(){
        std::cout << "Hello";
    }
}


int main()
{
    awesomeNamespace :: greeting();
    amazingNamespace :: greeting();
    return 0;
}
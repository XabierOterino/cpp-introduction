#include <iostream>

using namespace std;

template<class T>
class MathTools{
    public:
    T multiply(T a , T b){
        return a * b;
    }

    T divide(T a, T b){
        if(a>=b){
            return a / b;
        }
    }

    T add (T a , T b){
        return a + b;
    }

    T sub (T a , T b){
        if(a>=b){
            return a - b;
        }
    }
};

typedef MathTools<int> intMath;
typedef MathTools<double> doubleMath;



int main()
{
    intMath im;
    doubleMath dm;
    cout << im.add(2,4);
    cout << dm.add(2.2,4.5);
    return 0;
}
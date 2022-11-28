#include <iostream>
#include <string.h>

using namespace std;

//Base class
class Myclass {
public :
void myFunction ()
{
    cout << "Some content in parent class"<<endl << endl;
}


};
//another base class
class Myotherclass {
public :
void myOtherFuncition()
{
    cout << "Some content in another class."<<endl << endl;
}   
};
//Derived class
class Mychildclass :public Myclass, public Myotherclass{


};
int main ()
{
    Mychildclass obj;
    obj.myFunction();
    obj.myOtherFuncition();


    return 0;


}



































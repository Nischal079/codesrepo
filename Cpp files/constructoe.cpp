//WAP to show order of constructor(default,parameterized)  
//and destructor call in multiple inheritance.
#include <iostream>
using namespace std;
 
class base1 
{
    int x;
 
public:
 base1(){}
    base1(int i)
    {
        x = i;
        cout << "Base1 class's parameterised constructor called"<< endl;
    }
};
class base2
{
    int y;
 
public:
 base2(){};
    base2(int j)
    {
        y = j;
        cout << "Base2 class's parameterised constructor called"<< endl;
    }
};
 
class derived : public base1,public base2
{
public:
    derived(int x): base1(x)
    {
        cout << "Derived class's first parameterised constructor"<< endl;
    }
};

int main()
{
   derived obj1(10);

    return 0;
}
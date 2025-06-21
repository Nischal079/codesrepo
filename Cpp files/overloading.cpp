#include<iostream>
using namespace std;
class ABC
{
    int a;

    public:
    ABC ()
    {
        a=0;
    }
    ABC (int f){
        a=f;
    }

    ABC operator++(){
        ABC temp;
        temp.a=++a;
        return temp;
    }
    ABC operator++(int){
        ABC temp;
        temp.a=a++;
        return temp;
    }
    ABC operator--(){
        ABC temp;
        temp.a=--a;
        return temp;
    }
    ABC operator--(int){
        ABC temp;
        temp.a=a--;
        return temp;
    }
    void display(){
        cout<<"The value of a is: "<<a<<endl;
    }
};
int main()
{
    ABC p,q(3),r;
    p.display();
    r=p++;
    r.display();
    r=++p;
    r.display();
    r=q--;
    r.display();
    r=--q;
    r.display();

    return 0;
}

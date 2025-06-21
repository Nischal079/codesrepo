#include<iostream>
using namespace std;
class complex{
    private:
    int img,real;
    public:
    complex()
    {
        real = 0;
        img = 0;
    }
    complex(int r,int i)
    {
        real = r;
        img = i;
    }
    
    complex operator +(complex p)
    {
        complex temp;
        temp.real = real + p.real;
        temp.img = img + p.img;
        return temp;
    }
    void print()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }
};
int main()
{
    complex c1(5,4);
    complex c2(9,2);
    complex c3;
    c3 = c1 + c2;
    c3.print();
}

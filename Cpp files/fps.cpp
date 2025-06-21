#include<iostream>
using namespace std;

class gram
{
    float y;
    public:
    gram()
    {
        y = 0;
    }
    gram(float y1)
    {
        y = y1;
    }
    void display()
    {
        cout<<y;
    }
};
class tola
{
    float x;
    public:
    tola()
    {
        x = 0;
    }
    tola (float x1)
    {
        x = x1;
    }
    void display()
    {
        cout<<x;
    }
    operator gram()
    {
        float y = x*11.66;
        return gram(y);
    }
};
int main()
{
    tola T(10);
    gram gm;
    gm = T;
    gm.display();
    return 0;
}

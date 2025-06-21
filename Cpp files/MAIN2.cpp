#include<iostream>
using namespace std;
namespace A
{
    int sum(int x,int y)
    {
    return(x*x+y*y);
    }
}
namespace B
{
    void sum(int x,int y)
    {
    return(x*x*y*y);
    }
}
int main()
{
int x,y;

cin >> x >> y;
  
 A::sum(x,y);
 B::sum(x,y);

return 0;
}
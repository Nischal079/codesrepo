//Explain namespace with suitable program.
//Iam writting a program showing the use of namespace. 
#include<iostream>
using namespace std;

namespace A
{
    void calc(int a,int b)
    {
        int sum;
        sum = a+b;
        cout<<"THE sum is:\n"<<sum<<endl;
    }
}
namespace B
{
    void calc(int a,int b)
    {
        int diff;
        if(a>b)
        diff = a-b;
        else
        diff = b-a;
        cout<<"The diff is:\n"<<diff<<endl;
    }
}
int main()
{
    int a,b,c;
    cout<<"Enter any two numbers to calculate their sum and difference: \n";
    cin>>a>>b;
    A::calc(a,b);
    B::calc(a,b);
}
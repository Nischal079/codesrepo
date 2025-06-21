#include<iostream>
#include<string.h>
using namespace std;
int sum(int,int);
float sum(float,float);

int main()
{
    int a,b;
    float c,d;
    cout<<"Enter Two integers a and b:\n"<<endl;
    cin>>a;
    cin>>b;
    sum(a,b);
    sum(c,d);
    return 0;
}
int sum(int a,int b)
{
    int t;
    t=(a*a+b*b);
    cout<<"The sum is: \n"<<t<<endl;
    return t;
}
float sum(float c,float d)
{
    int i;
    i=(c+d);
    cout<<"The sum is: \n"<<i;
    return i;
}

//WAP to create two classes ABC with data member metre,cm and XYZ with data member
//inch and feet.Using friend function access private data of 
//ABC and XYZ and display of all datas.
//Display result either in m,cm format or in inch,feet format.
#include<iostream>
using namespace std;
class  XYZ;
class ABC
{
private:
float meter;
float cm;
public:
void getdata()
{
    cout<<"The numeric values in meters and cm are\n";
    cin>>meter;
    cin>>cm;
}
friend void frnd(ABC,XYZ);
};
class XYZ
{
private:
float inch;
float feet;
public:
void getdata()
{
    cout<<"Enter the data in feet and inch: \n";
    cin>>inch;
    cin>>feet;
}
friend void frnd(ABC,XYZ);
};
void frnd(ABC a,XYZ h)
{
    cout<<"The values in class ABC are: \n";
    cout<<a.meter<<" Meters \n";
    cout<<a.cm<<" centi meters \n";
    cout<<"The values in cass xyz are: \n";
    cout<<h.inch<<" inches \n";
    cout<<h.feet<<" feets \n";
}
int main()
{
    ABC abc;
    abc.getdata();
    XYZ xyz;
    xyz.getdata();
    frnd(abc,xyz);
}
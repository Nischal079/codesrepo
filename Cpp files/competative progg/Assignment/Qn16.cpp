//WAP to add distances D1(feet,inch) and D2(feet,inch).
//1.Display result inside member function.
//2.Display result by returning values from member function.
//(i)nameless object
//(ii)named object
//3.Using friend function.
#include<iostream>
using namespace std;
class dist
{
    float feet1;
    float inch1;
    float feet2;
    float inch2;
    float feet;
    float inch;
    public:
    void getdata()
    {
        cout<<"Enter the distance in feet and inch: \n";
        cin>>feet1;
        cin>>inch1;
        cin>>feet2;
        cin>>inch2;
    }   
    void display()
    {
        cout<<"The given values are: \n \n";
        cout<<feet1<<"\n and \n"<<inch1<<endl;
        cout<<feet2<<"\n and \n"<<inch2<<endl;
    }
   friend void sum(dist & obj);
};
int main()
{
    dist d1;
    d1.getdata();
    d1.display();
    sum(d1);
}
void sum(dist & obj)
{
    obj.feet = obj.feet1 + obj.feet2 + (obj.inch1 + obj.inch2)*12;
    obj.inch = obj.inch1 + obj.inch2 + (obj.feet1 + obj.feet2)/12;

    cout<<"The total Distance measured in feet is: \n";
    cout<<obj.feet<<endl;
    cout<<"The total distance measured in inch is: \n"<<obj.inch<<endl;
};
#include<iostream>
using namespace std;
class DB;
class DM
{
    float m;
    float cm;
    public:
   void getdata1()
   {
       cout<<"Enter the value in meter and centimeter: \n";
       cin>>m>>cm;
   }  
   void showdata1()
   {
       cout<<"The values in meter and centimeter are: \n";
       cout<<m<<" meters\n"<<cm<<" centimeters\n";
   }
   friend void sum(DM,DB);
};
class DB
{
    float feet,inch;
    public:
    void getdata2()
    {
        cout<<"The values of distances in feet and inches: \n";
        cin>>feet>>inch;
    }
    void showdata2()
    {
        cout<<"The data given by user in feet and inches are: \n";
        cout<<feet<<" feets\n"<<inch<<" inches\n"<<endl;
    }
    friend void sum(DM,DB);
};
 void sum(DM a,DB b)
{
    float dist;
    dist = (a.m+(a.cm/100)+(b.feet/0.3048)+((b.inch*12)/0.3048));
    cout<<"The total distance travelled in meter is: \n";
    cout<<dist;
}
int main()
{
    DM o;
    o.getdata1();
    o.showdata1();
    DB p;
    p.getdata2();
    p.showdata2();
    sum(o,p);
    return 0;
}
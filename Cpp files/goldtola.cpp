#include<iostream>
using namespace std;
class grams;
class Tola
{
    float tola;
    public:
    void getdata()
    {
        cout<<"Enter the weight of gold in tola: \n";
        cin>>tola;
    }
    int showdata()
    {
        cout<<"The weight of gold entered in tola is:\n";
        cout<<tola<<" Tola\n";
        return tola;
    }
    int showdata1()
    {
        return tola;
    }
};
class Grams
{
    float grams;
    public:
    void getdata()
    {
        cout<<"Enter the weight of gold in grams: \n";
        cin>>grams;
    }
    int display()
    {
        cout<<"The weight of gold entered in grams is:\n";
        cout<<grams<<" Grams\n";
        return grams;
    }
    int display1()
    {
        return grams;
    }
};
int main()
{
    float g,t;
    Tola t1;
    Grams g1;
    t1.getdata();
    t1.showdata();
    g1.getdata();
    g1.display();
    g = (t1.showdata1()/11.66)+g1.display1();
    t = t1.showdata1()+(g1.display1()*11.66);
    cout<<"The weight of gold in grams is: \n";
    cout<<g<<endl;
    cout<<"The weight of gold in Tola is: \n";
    cout<<t<<endl;
    return 0;
}
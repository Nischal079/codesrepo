//Qn 1://WAP to show ambiguity in multiple inheritance and resolve it.
#include<iostream>
using namespace std;
class base1
{
    private:
    char name[20];
    public:
    void getdata()
    {
        cout<<"Enter the name of the student: \n";
        cin>>name;
    }
    void display()
    {
        cout<<"The name of the student is \n"<<name<<endl;
    }
};
class base2
{
    private:
    int roll;
    public:
    void getdata()
    {
        cout<<"Enter the roll no. of the student:\n";
        cin>>roll;
    }
    void display()
    {
        cout<<"The roll no of the student is:\n";
        cout<<roll;
    }
};
class derived: public base1,public base2
{
    char st_id[50];
    public:
    void stu_id()
    {
     //Ambiguity error can be solved as following:
    getdata();
    getdata();
    display();
    display();
    };
};
int main()
{
    derived d1;
    d1.stu_id();
    return 0;
}
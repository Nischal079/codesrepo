#include<iostream>
#include<string>
using namespace std;
class student
{
    protected:
    int roll;
    string name;
    public:
    void getdata()
    {
        cout<<"Enter the Roll number:\n";
        cin>>roll;
        cout<<"Enter the Name of student:\n";
        cin>>name;
    }
    void dispaly()
    {
        cout<<"Name: \n"<<name<<endl;
        cout<<"roll: \n"<<roll<<endl;
    }
};
class test:public student
{   
    protected:
    int total;
    protected:
    int sub1,sub2;
    public:
    void Marks()
    {
        cout<<"Enter marks for sub1 :\n";
        cin>>sub1;
        cout<<"Enter marks in sub2 :\n";
        cin>>sub2;
        total = sub1+sub2;
    }
};
class result:public test
{
   public:
   void Result()
   {
       cout<<"\n The Total marks of "<<name<<" is "<<total<<endl;
       if(sub1>=50 & sub2>=50)
       cout<<"Result: passed\n";
       else
       cout<<"Result: failed\n";
   }
};
int main()
{
    result r;
    r.getdata();
    r.dispaly();
    r.Marks();
    r.Result();
    return 0;
}
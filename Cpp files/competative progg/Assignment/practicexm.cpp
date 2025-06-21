//wap to read and write the info of 10 students in a file.Also modify the
//student information according to the given roll number.
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class student
{
    public:
    int roll;
    string name;
    void getdata()
    {
        cout<<"Enter name of student:\n"<<endl;
        cin>>name;
        cout<<"Enter roll  of student:\n"<<endl;
        cin>>roll;
    }
    void display()
    {
        cout<<"Name of the student is:\n"<<name<<endl;
        cout<<"roll number of student is:\n"<<roll<<endl;
    }
};

int main()
{
    student s;
    int i,n;
    cout<<"Enter the number of students:\n";
    cin>>n;
    fstream obj;
    obj.open("stu.txt");
    for(i=1;i<=n;i++)
    {
    s.getdata();
    obj<<s.name;
    obj<<s.roll;
    }
    for(i=1;i<=n;i++)
    {
    s.display();
    obj>>s.name;
    obj>>s.roll;
    }
    return 0;
}
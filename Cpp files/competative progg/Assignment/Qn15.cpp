/*What do you mean by constructor and destructor.
Explain all constructors with suitable example.
Also display appropriate message when object goes out of scope.
*/
#include<iostream>
#include<string.h>
using namespace std;
class student
{
    private:
    char name[25];
    int roll;
    public:
    student()
    {
        cout<<"Default constructor called: \n \n";
        cout<<"Enter name and roll of student: \n";
        cin>>name;
        cin>>roll;
    }
    student(char N[25],int a)
    {
        cout<<"parametrized const..called \n \n";
        strcpy(name,N);
        roll = a;
    }
    student(student &obj)
    {
        cout<<"Copy constructor called..\n \n";
        strcpy(name,obj.name);
        roll = obj.roll;
    }
    void showdata()
    {
        cout<<"\nThe name and roll number of the selected student: \n";
        cout<<"Name_: \n"<<name<<endl;
        cout<<"Roll_number: \n"<<roll<<endl;
    }
    ~student(){cout<<"Destructor called...";}
};
int main()
{
    student s1;
    student s2("Nischal",19);
    student s3(s2);

    s1.showdata();
    s2.showdata();
    s3.showdata();
    return 0;
}
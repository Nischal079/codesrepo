#include<iostream>
using namespace std;
class Faculty
{
public:
    Faculty(){cout<<"Faculty() constructor called \n";}
    Faculty(int x)  
    {
       cout<<"Faculty(int) constructor called \n No of faculties: "<< endl;
       cout<<x<<endl;
    }
    ~Faculty(){cout<<"Distructor Faculty() called...\n";}
};
  
class Student 
{
public:
Student(){cout<<"Student() constructor called\n";}
    Student(int x)
    {
        cout<<"Student(int) constructor called\n No of students required for each faculty: "<< endl;
        cout<<x<<endl;
    }
   ~Student(){cout<<"Student() destructor called...\n";}
};
  
class derived : public Faculty, public Student  
{
public:
    derived(){cout<<"Derived() constructor called\n";}
    derived(int x):Student(x), Faculty(x)   
    {
        cout<<"derived(int) constructor called\n No of candidates: "<< endl;
        cout<<x<<endl;
    }
    ~derived(){cout<<"Derived() destructor called...\n";}
};
  
int main()  
{
    derived a2(30);
    derived a1;
    return 0;
}
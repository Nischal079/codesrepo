/* Create a class named “animal” with data and methods as follows:
 
 Data : name,id_number,cost

 methods:
    void setdata(char,int,float); 
    and
    void showdata();
 Create two different objects of type “animal”.
 Use setdata(..) to set the data members values
 and use showdata() to display them */
#include<iostream>
using namespace std;
class animal
{
    char name[25];
    int id_num;
    float cost;
    public:
    void setdata()
    {
    cout<<"Enter the name,id number and cost of the animal\n";
    cin>>name>>id_num>>cost;
    }

    void showdata()
    {
        cout<<"The database provided by the user is:\n";
        cout<<"Name of the animal is:\n"<<name<<endl;
        cout<<"identifiaction number of that animal is:\n"<<id_num<<endl;
        cout<<"Total cost of the animal is:\n"<<cost<<endl;
    }

};
int main()
{
    animal a1;
    a1.setdata();
    a1.showdata();
}

#include<iostream>
using namespace std;
class external_exm;
class internal_exm;
class result;
class student
{
protected:
int stu_id;
char name[25];
public:
void getdataS()
{
    cout<<"Enter the student identification number: \n";
    cin>>stu_id;
    cout<<"Enter the name of the student \n";
    cin>>name;
}
};
class internal_exm:virtual public student
{
    protected:
    int internal_mrk;
    public:
    void getdataI()
    {
        cout<<"Enter the internal marks scored by student\n";
        cin>>internal_mrk;
    }
};
class external_exm:virtual public student
{
 protected:
    int external_mrk;
 public:
 void getdataE()
 {
   cout<<"Enter the external marks scored by student\n";
   cin>>external_mrk;
 }
};
class result:virtual public internal_exm,virtual public external_exm
{
    int exm_result;
    public:
    void rslt()
    {
    exm_result = internal_mrk + external_mrk;
    cout<<"The result of "<<name<<" is :\n"<<exm_result<<endl;
    }
};
int main()
{
    result r1;
    r1.getdataS();
    r1.getdataI();
    r1.getdataE();
    r1.rslt();
    return 0;
}
#include<iostream>
using namespace std;
class cricketer
{
    char name[25];
    int age;
    int no_of_match;
    public:
    void getadatac()
    {
        cout<<"Name of player\n";
        cin>>name;
        cout<<"Age of player\n";
        cin>>age;
        cout<<"NO. of matches played\n";
        cin>>no_of_match;
    }
    void displayc()
    {
        cout<<"Name of the player is:\n"<<name<<endl;
        cout<<"AGE of player is\n"<<age<<endl;
        cout<<"No. of matches played is:"<<no_of_match<<endl;
    }
};
class bowler:public cricketer
{
    int wicket;
    public:
    void getdatab()
    {
    cout<<"NO. of wickets taken"<<endl;
    cin>>wicket;
    }
    void displayb()
    {
        cout<<"No. of wickets taken is\n"<<wicket<<endl;
    }
};
class batsman:public cricketer
{
    int runs;
    int centuries;
    public:
    void getdataa()
    {
    cout<<"NO. of runs made"<<endl;
    cin>>runs;
    cout<<"NO. of centuries made\n"<<centuries<<endl;
    }
    void showdataa()
    {
        cout<<"No. of runs made is:\n";
        cout<<runs;
        cout<<"No. of centuries made:\n"<<centuries<<endl;
    }
};
int main()
{
    batsman a;
    a.getadatac();
    a.displayc();
    a.getdataa();
    a.showdataa();
    bowler b;
    b.getdatab();
    b.displayb();
    return 0;
}
#include<iostream>
#define max 5
using namespace std;
class queue1
{
private:
    int item,front,rear,qu[max];
public:
    queue1():front(0),rear(-1){};
    void enqueue();
    void dequeue();
    void display();
};
void queue1::enqueue()
{
 if(rear==max-1)
   {
     cout<<"stack is full..."<<endl;
   }
 else
   {
     cout<<"Enter your item for queue"<<endl;
     cin>>item;
     rear++;
     qu[rear]=item;
   }
}
void queue1::dequeue()
{
    if(rear==-1)
    {cout<<"Queue is empty"<<endl;}
    else{
        item=qu[0];
        for(int i=0; i<=rear; i++)
        {qu[i]=qu[i+1];}
        rear--;
    }
}
void queue1::display()
{
    for(int i=front;i<=rear;i++)
    {
        cout<<qu[i]<<endl;
    }
}
int main()
{
    queue1 q;
    bool decision = true;
    int choice;
    while(decision)
    {
        cout<<"Stack operation:"<<endl;
        cout<<"1.enqueue /n 2.dequeue /n 3.display /n 4.exit"<<endl;
        cout<<endl<<"Enter your choice:"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:q.enqueue();
            break;
        case 2:q.dequeue();
            break;
        case 3:q.display();
            break;
        case 4:decision = false;
            break;
        default:
            cout<<"Invalid choice"<<endl;
        }
    }
    return 0;
} 
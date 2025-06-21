//wap to find the price of n items.Pass the number of items and unit price to the function and return the total price.
// when the unit price is not specified use a default price that is iused for moust of the items.
#include<iostream>
using namespace std;
void price(float=30,float=30,float=30);
float na,nb,nc;
int main()
{
    float a,b,c;
    cout<<"Total number of 1st item 'a' are: ";
    cin>>na;
    cout<<"Total number of 2nt item 'b' are: ";
    cin>>nb;
    cout<<"Total number of 3rd item 'c' are: ";
    cin>>nc;
    cout<<"Enter the price of items"<<endl;
    cin>>a >> b >> c;

    price();

    price(a,b);

    price(a,b,c);
    
    return 0;
}
void price(float a,float b,float c)
{
    float p,q,r;
    p = a * na;
    q = b * nb;
    r = c * nc;
    
    cout<<"The total price of "<<na<<" a : "<<p<<endl;
    cout<<"The total price of "<<nb<<" b : "<<q<<endl;
    cout<<"The total price of "<<nc<<" c : "<<r<<endl;

}
#include<iostream>
using namespace std;
int x,y;
void swap(int x,int y)
{
int t=0;
t = x;
x = y;
y = t;
cout<<"The numbers after swapping are: \n"<< x   << "\nand\n" <<   y<<endl;
}

int main()
{
cout<<"Enter any two numbers to be swapped: "<<endl;
cin >> x >> y;
cout<<"The numbers before swapping are: \n"<< x   << "\nand\n" <<   y<<endl;
swap(x,y);
return 0;
}

#include<iostream>
using namespace std;
template<class T>
class MaxMin
{
    private:
     T max,min;
 public:
 void getMaxMin(T array[],int n)
 {
    max=array[0];
    min=array[0];
for(int i=1;i<n;i++)
 {
    if(array[i]>max)
    max=array[i];
    if(array[i]<min)
    min=array[i];
 }
     }
        void display()
        {
            cout<<"\nMaximum value is: "<<max<<"\nMinimum value is: "<<min<<endl;
        }
};
int main()
{
    int array[10];
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element: ";
        cin>>array[i];
    }
    MaxMin<int> m;
    m.getMaxMin(array,n);
    m.display();
    return 0;
}
#include<iostream>
#define F(x) (x*x-4*x-10)
#define E 0.0001
#include<math.h>

using namespace std;
int main()
{
    float x1,x2,xm;
    do{
        cout<<"Enter your initial guess:"<<endl;
        cin>>x1;
        cin>>x2;
    }while(F(x1)*F(x2)>0);

    do{
        xm = (x1+x2)/2;
        if (F(x1)*F(xm)<0)
        {
            x2 = xm;
        }
        else
        {
            x1 = xm;
        }
        
    }while (fabs(x2-x1)>E);

    cout<<"Your required root is: "<<endl;
    cout<<xm;
    return 0;
}
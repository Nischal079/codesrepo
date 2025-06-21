//wap to show multiple inheritance using constructors only.
#include<iostream>
using namespace std;
class base1{
	protected:
	int marks1;
	public:
		base1(){
			cout<<"base1 default constructor"<<endl;
		}
		base1(int m1){
			cout<<"base1 parameterised constructor"<<endl;
			marks1=m1;
		}
		~base1(){
			cout<<"base1 destructor"<<endl;
		}
	
};
class base2{
	protected:
	int marks2;
	public:
		base2(){
			cout<<"base2 default constructor"<<endl;
		}
		base2(int m2){
			cout<<"base2 parameterised constructor"<<endl;
			marks2=m2;
		}
		~base2(){
			cout<<"base2 destructor"<<endl;
		}
	
	
};
class derived:public base1,public base2{
	int total;
	public:
		derived(){
			cout<<"derived class Default constructor"<<endl;
		}
		derived(int m1,int m2):base1(m1),base2(m2){
			cout<<"derived class parameterised constructor"<<endl;
		}
		void display(){
			total=marks1+marks2;
			cout<<"Total marks"<<total;
		}
		~derived(){
			cout<<"derived destructor"<<endl;
		}
	
};
int main()
{
	derived d;//d is an object of derived class
	derived d1(12,14);
	d1.display();
	return 0;
}

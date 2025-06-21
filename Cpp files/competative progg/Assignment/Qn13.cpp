/*C++ inline function is powerful concept that is commonly used with classes.
 If a function is inline, the compiler places a copy of the code of that
 function at each point where the function is called at compile time.
 To inline a function, place the keyword inline before the function name
 and define the function before any calls are made to the function.The compiler
 can ignore the inline qualifier in case defined function is more than a line.
 A function definition in a class definition is an inline function definition,
 even without the use of the inline specifier.
*/
#include <iostream> 
using namespace std;
inline int Max(int x, int y) 
{
    return (x > y)? x : y;
}

int main() 
{
   int m,n;
   cout <<"Enter any two numbers to find the greater number: \n";
   cin >>m>>n;
   if(m == n)
   cout<<"You entered same numbers!\npleaase enter different numbers to see the results...";
   else
   cout << "Maximum number is: " << Max(m,n) << endl;
   return 0;
}
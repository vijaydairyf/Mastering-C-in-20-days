/*Operators
• Various types of operators are supported by C++
• They are categorised as
• unary
• binary
• ternary
• Each operator has its precedence and associativity
• Higher precedence operators are executed first
Expression
• Expression contains operands and operator
• Expressions results in a single value
• datatype of result of expression is the largest datatype used in expression
Compound Arithmetic Operator */
#include <iostream>
using namespace std;
int main()
{
int sum=10,x=5;		//multiple declaration and initialization of variables in single line
sum+=x;			//sum=sum+x;
cout<<sum<<endl;
int fact=10,y=5;
fact*=y;		//fact=fact*y
cout<<fact<<endl;
return 0;
}
Program to find root of Quadratic Equation
#include <iostream>
#include <math.h>		//predefined library is used to sqrt() function in our program.
using namespace std;
int main()
{
int a,b,c;
float root1,root2;
cout<<"Enter 3 values";
cin>>a>>b>>c;		//cin is use to accept the values from keyboard
root1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
root2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
cout<<root1<<" "<<root2<<endl;
return 0;
}
Program to find Area of Circle
#include <iostream>
using namespace std;
int main()
{
float r,area;
cout<<"Enter the Radius";
cin>>r;
area=3.1425f*r*r;
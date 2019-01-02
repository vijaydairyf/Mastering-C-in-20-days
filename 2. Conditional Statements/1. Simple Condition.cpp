/*Conditional Statements
• If and else is used for writing conditional statement
• If condition is true then if block is executed
• If condition is false then else block is executed
• 0 - means false
• 1- means true or non0zero value is also true
If can be nested inside if as well as else statement 
Nesting of is is also written as else-if ladder */


//Program to Demonstrate Simple Conditional Statement
#include <iostream>
using namespace std;
int main()
{
int roll;
cout<<"Enter your Roll No."<<endl;
cin>>roll;
if(roll>0)		//if(condition)
{
cout<<"Valid Roll No."<<endl;
}
else
{
cout<<"Invalid Roll No."<<endl;
}
return 0;
}
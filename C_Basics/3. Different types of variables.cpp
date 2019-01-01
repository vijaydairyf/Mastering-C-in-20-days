// Program to implement different kind of variables in c

#include<iostream>
using namespace std;
int main()
{
char a='A';	//character variable	Range of character -128 to 127 with 1 byte size	
cout<<a<<endl;
cout<<sizeof(a);	//sizeof keyword is used to find the byte used by charcter variable
char b=65;
cout<<b<<endl;
int a=10;	//integer variable	
cout<<c<<endl;
char d=65.5;	//character variable truncate the decimal value
cout<<d<<endl;
float f=123.56;	//Floating variables
cout<<f<<endl;
float g=123e2;	//floating variables in mantissa and exponent form
cout<<g<<endl;
float h=123e-2;
cout<<h<<endl;
double n=10.0000;	//double is also decimal containing variables but with higher precision
string i="Hello";	//string variable, not primitive (user defined data type in C++ (not in C language))
cout<<i<<endl;

bool flag=true;		// boolean variable contains oen of the two types of values "True" or "false" , (only in C++)
  return 0;
}

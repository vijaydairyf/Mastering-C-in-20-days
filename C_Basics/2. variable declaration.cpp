//Program to show declaration and initialization of variables
#include<iostream>
using namespace std;
int main()
{
int a;  // Variable declaration 
a=10;	//initialisation
cout<<a<<endl;
int b=10;   //declaration and initialisation 
cout<<b<<endl;	//endl is use for new line 
int c=0x10;  // declartion and initialisation of hexadecimal variable
cout<<c<<endl;
int d(10);	//also a kind of declaration and initialisation, updated in version 11 of c++
cout<<d<<endl;
int f=(10);	//also a kind of declaration and initialisation, updated in version 11 of c++
cout<<f<<endl;
int g{10};	//also a kind of declaration and initialization, updated in version 11 of c++		
cout<<g<<endl;
int h={10};	//also a kind of declaration and initialization, updated in version 11 of c++
cout<<h<<endl;
return 0;
}
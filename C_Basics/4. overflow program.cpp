Program to Demonstrate Overflow
#include <iostream>
using namespace std;
int main()
{
char a=128;	//outside range of char (which is -128 to 127)
cout<<(int)a<<endl;
char b=127;
b++;
cout<<(int)b<<endl;
char c=-129;
cout<<(int)c<<endl;
char d=-128;
d--;
cout<<(int)d<<endl;
int e=INT_MAX;	//contains the maximum value of integer variable i.e. 32767  
e++;
// default range of integer is -32768 to 32767
cout<<(int)e<<endl;
return 0;
}
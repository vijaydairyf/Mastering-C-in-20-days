/*  Loops
� Loops are iterative statements
� Block of statements are repeatedly executed as long as condition is true
� Condition given in loop must become false after some finite iterations otherwise its a
infinite loop
� Values used in condition must update inside the body of finite loop
� Four types of loops
��
pre-tested loop while()
� post-tested loop do..while()
� counter controlled loop for()
� for each loop for Collections for()  */

//Program to Test all Loops
#include <iostream>
using namespace std;
int main()
{
int a=0;
while(a<10)
{
cout<<"a "<<a;
a++;
}
int b=0;
do
{
cout<<"b "<<b;
b++;
}while(b<10)
;for(int i=0;i<10;i++)
{
cout<<"i "<<i;
}
return 0;
}
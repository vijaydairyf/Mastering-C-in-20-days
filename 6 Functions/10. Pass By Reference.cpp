/*Call by Reference
• Actual parameters are passed as reference
• Formal parameters can directly access actual parameters
• Function call is converted into inline function, if not possible it will become call by
address
• Reference don’t take extra memory
• Syntax is same as Call by Value except, formal parameters are reference  */
Void swap(int &a, int &b)
{
int temp;
temp=a;
a=b;
b=temp;
}
Int main()
{
int x=10, y=20;
swap(x,y);
cout<<x<<y;
}
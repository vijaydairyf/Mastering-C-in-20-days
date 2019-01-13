/*Call by Address
• Address pf actual parameters are passed.
• Formal parameters must be pointers
• Formal parameters ca indirectly access actual parameters.
• Changes done using formal parameters will reflect in actual parameters  *?
Void swap(int *x, int *y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
}
Int main()
{
int a=10, b=20;
swap(&a,&b);
cout<<a<<b;
}
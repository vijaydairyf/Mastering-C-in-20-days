/*Return by Reference
• A function cal return reference
• It should not return reference of its local variables
• It can return formal parameters if they are reference */
Int & fun(int &a)
{
cout<<a;
return a;
}
Int main()
{
int x=10;
fun(x)=25;
cout<<x;
}
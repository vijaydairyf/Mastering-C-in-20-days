Program to Display digits of a Number
#include <iostream>
using namespace std;
int main()
{
int n,r;
cout<<"Enter a no. ";
cin>>n;
while(n!=0)
{
r=n%10;
n=n/10;
cout<<r<<" ";
}
cout<<endl;
}
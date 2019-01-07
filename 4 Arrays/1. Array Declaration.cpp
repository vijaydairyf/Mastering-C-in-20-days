 /* Arrays
• Array is a collection of similar data elements under one name, each element is
accessible using its index
• Memory for array is allocated contagiously
• For-each loop is used for accessing array
• N-dimension arrays are supported by C++
• Two-Dimensional Arrays are sued for Matrices
• Array can be created in Stack or Heap Section of memory    */


//Program to Demonstrate Declaration and Initialization of an Array
#include <iostream>
using namespace std;
int main()
{
int A[5];
cout<<A<<endl;
int B[5]={2,4};
cout<<B<<endl;
int C[]={2,4,6,8,10};
cout<<C<<endl;
return 0;
}
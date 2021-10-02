// The reference variable in C++ is the name given to the existing variables. 
//The variable name and reference variable point share the same memory location in C++, which helps in updating the original variable using the reference variable.
//The code can be displayed in the following example.

#include<iostream>
using namespace std;
int main()
{
  int x = 10;
  // ref is a reference to x.
  int& ref = x;
  // Value of x is now changed to 20
  ref = 20;
  cout << "x = " << x << endl ;
  // Value of x is now changed to 30
  x = 30;
  cout << "ref = " << ref << endl ;
  return 0;
} 

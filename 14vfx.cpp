
/*                     PROGRAM 14
OBJECTIVE : Write a program in C++ demonstrate the use of virtual function.

*/

#include<iostream>
using namespace std;
class A
{
public:
virtual void fun()
{
cout<<"BASE";
}
};
class B: public A
{
public:
void fun()
{
cout<<"DERIVED";
}
};
int main()
{
A *obj=new B;
obj->fun();
return 0;
}

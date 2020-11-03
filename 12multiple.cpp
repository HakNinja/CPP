
/*                     PROGRAM 12
OBJECTIVE : Write a program in C++ demonstrate the concept of multiple inheritance.

*/


#include<iostream>
using namespace std;
class A{
public:
int a;
A(){
cout<<"CONSTRUCT A IS CALLED"<<endl;
a=10;
}
};
class B{
public:
int b;
B(){
cout<<"CONSTRUCT B IS CALLED"<<endl;
b=20;
}
};
class C:public A,public B{
public:
C(){
cout<<"CONSTRUCT C IS CALLED"<<endl;
cout<<"a="<<a<<" b="<<b<<endl;
cout<<"a*b="<<a*b<<endl;
}
};
int main()
{
C obj;
return 0;
}

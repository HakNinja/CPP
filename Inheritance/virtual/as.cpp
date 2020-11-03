#include<iostream>
using namespace std;
class A
{
public:
void fun()
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

class C: public B
{
public:
void fun()
{
cout<<"SUPER DERIVED";
}
};

int main()
{
A *obj=new C;
obj->fun();
return 0;
}

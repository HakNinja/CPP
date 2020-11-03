#include<iostream>
using namespace std;
class A
{
public:
virtual void fun()
{
cout<<"Super Base";
}
};

class B: public A
{
public:
void fun()
{
cout<<"BAse";
}
};

class C: public B
{
public:
void fun()
{
cout<<"DERIVED";
}
};

int main()
{
A *obj=new C;
obj->fun();
return 0;
}

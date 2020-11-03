#include<iostream>
using namespace std;

class A
{
public:
int a;
void getdata(int i)
{
a=i;
}
};

class B:virtual public A
{
public:
int b;
void gdata(int i)
{
b=i;
}
};

class C:virtual public A 
{
public:
int c;
void reddata(int i)
{
c=i;
}
};

class D:public C,public B
{
public:
void multr()
{
cout<<"a="<<a<<" b="<<b<<endl;
}
void multl()
{
cout<<"a="<<a<<" c="<<c<<endl;
}
};

int main()
{

D obj1;
obj1.getdata(10);
obj1.gdata(20);
obj1.multr(); 

D obj2;
obj2.getdata(40);
obj2.reddata(60);
obj2.multl();  
return 0;
}

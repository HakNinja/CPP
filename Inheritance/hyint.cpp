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

class B
{
public:
int b;
void gdata(int i)
{
b=i;
}
};

class C:public A,public B 
{
public:
int c;
void reddata(int i)
{
c=i;
}
};

class D:public C
{
public:
void mult()
{
cout<<"a="<<a<<" b="<<b<<" c="<<c<<endl;
}
};

class E:public C
{
public:
void mult()
{
cout<<"c="<<c<<" b="<<b<<" a="<<a<<endl;
}
};

int main()
{

D obj1;
obj1.getdata(10);
obj1.gdata(20);
obj1.reddata(30);

obj1.mult(); 

E obj2;
obj2.getdata(40);
obj2.gdata(50);
obj2.reddata(60);

obj2.mult();  
return 0;
}

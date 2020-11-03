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

class B: public A
{

public:
int b;
void rddata(int i)
{
b=i;
}
};

class C: public B
{
int c;
public:
void readdata(int i)
{
c=i;
}
void mult()
{
cout<<"a="<<a<<" b="<<b<<" c="<<c;
}
};


int main()
{
C obj;
obj.getdata(10);
obj.rddata(20);
obj.readdata(30);
obj.mult(); 
return 0;
}

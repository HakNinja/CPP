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
void rddata(int i)
{
b=i;
}
};

class C: public A,public B
{
public:
void mult()
{
cout<<"a="<<a<<" b="<<b<<endl;
cout<<"a*b="<<a*b;
}
};


int main()
{
C obj;
int a,b;
cout<<"ENTER a:";
cin>>a;
cout<<"ENTER b:";
cin>>b;
obj.getdata(a);
obj.rddata(b);
obj.mult(); 
return 0;
}

#include<iostream>
using namespace std;
class A
{
public:
int a;
A()
{
cout<<"CONSTRUCT A IS CALLED"<<endl;
a=10;
}
void getdata(int i)
{
a=i;
}
};

class B
{
public:
int b;
B()
{
cout<<"CONSTRUCT B IS CALLED"<<endl;
b=20;
}
void rddata(int i)
{
b=i;
}
};

class C:public B,public A
{
public:
C()
{
cout<<"CONSTRUCT C IS CALLED"<<endl;
cout<<"a="<<a<<" b="<<b<<endl;
cout<<"a*b="<<a*b<<endl;
}
/*void mult()
{

}*/
};


int main()
{
C obj;
/*int a,b;
obj.mult();
cout<<"ENTER a:";
cin>>a;
cout<<"ENTER b:";
cin>>b;
obj.getdata(a);
obj.rddata(b);
obj.mult();*/ 
return 0;
}

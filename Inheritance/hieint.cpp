#include<iostream>
using namespace std;
class A
{
public:
int a;
int b;
void getdata(int c,int d)
{
a=c;
b=d;
}
};

class B:public A
{
public:
void mult()
{
cout<<"a="<<a<<" b="<<b<<endl;
cout<<"a+b="<<a+b<<endl;
}
};

class C: public A
{
public:
void mult()
{
cout<<"a="<<a<<" b="<<b<<endl;
cout<<"a*b="<<a*b<<endl;
}
};


class D: public A
{
public:
void mult()
{
cout<<"a="<<a<<" b="<<b<<endl;
cout<<"a/b="<<a/b<<endl;
}
};

int main()
{
int a,b;
cout<<"ENTEER TWO VALUE";
cin>>a>>b;
B obj1;
obj1.getdata(a,b);
C obj2;
obj2.getdata(a,b);
D obj3;
obj3.getdata(a,b);
obj1.mult();
obj2.mult();
obj3.mult(); 
return 0;
}

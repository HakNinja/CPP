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
int b;
public:
void readdata(int i)
{
b=i;
}
void mult()
{
cout<<"result:"<<a*b;
}
};
int main()
{
B obj;
obj.getdata(10);
obj.readdata(20);
obj.mult(); 
return 0;
}

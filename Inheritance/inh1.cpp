#include<iostream>
using namespace std;
class A
{
public:
int a;
};
class B: public A
{
int b;
public:
void getdata(int i,int j)
{
a=i;
b=j;
}
void mult()
{
cout<<"result:"<<a*b;
}
};
int main()
{
B obj;
obj.getdata(10,20);
obj.mult(); 
return 0;
}

#include<iostream>
using namespace std;
class Construct{
int x;
int y;
public:
Construct(int a,int b =10)
{
cout<<"PARAMETERISED CONSTRUCT IS CALLED"<<endl;
x=a;
y=b;
}
void display()
{
cout<<"x="<<x<<" ,y="<<y<<endl;
}
};
int main()
{
Construct c1(10,18),c2(11);
c1.display();
c2.display();
return 0;
}

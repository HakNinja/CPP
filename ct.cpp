#include<iostream>
using namespace std;
class Construct{
int x;
int y;
public:
Construct()
{
cout<<"CONSTRUCT IS CALLED"<<endl;
x=12;
y=10;
}
Construct(int a,int b)
{
cout<<"CONSTRUCT IS CALLED"<<endl;
x=a;
y=b;
}
Construct(const Construct &c)
{
cout<<"CONSTRUCT IS CALLED"<<endl;
x=c.x;
y=c.y;
}
~Construct()
{
cout<<"DESTRUCTOR IS CALLED"<<endl;
}
void display()
{
cout<<"x="<<x<<" ,y="<<y<<endl;
}
};
int main()
{
Construct c1,c2(10,18);
cout<<"I'AM THE MAIN FUNCTION"<<endl;
c1.display();
c2.display();
Construct c3=c1;
c3.display();
return 0;
}

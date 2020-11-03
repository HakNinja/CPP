#include<iostream>
using namespace std;
class Construct{
int x;
int y;
public:
Construct(int a,int b):x(a),y(b)
{
cout<<"PARAMETERISED CONSTRUCT IS CALLED"<<endl;
}
void display()
{
cout<<"x="<<x<<" ,y="<<y<<endl;
}
};
int main()
{
Construct c1(10,18);
c1.display();
return 0;
}

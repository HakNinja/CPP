
/*                     PROGRAM 9
OBJECTIVE : Write a program in C++ to demonstrate the concept of Parameterized Constructor.

*/


#include<iostream>
using namespace std;

class Construct{
int x;
int y;
public:
Construct(int a,int b)
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
Construct c1(10,18);
c1.display();
return 0;
}


/*   OUTPUT:
 
PARAMETERISED CONSTRUCT IS CALLED
x=10 ,y=18
 
 */

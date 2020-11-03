
/*                     PROGRAM 15
OBJECTIVE : Write a program in C++ to illustrates the use of pointers bto objects.

*/


#include<iostream>
using namespace std;
class A
{
int i;
int j;
public:
void getdata(int a,int b)
{
i=a,j=b;
}
void putdata()
{
cout<<"Entered two number are :"<<endl;
cout<<"a="<<i<<" b="<<j;
}
};

int main()
{
int a,b;
cout<<"Enter two number:";
cin>>a>>b;
A *obj=new A;
obj->getdata(a,b);
obj->putdata();
return 0;
}

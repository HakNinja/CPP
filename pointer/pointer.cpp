#include<iostream>
using namespace std;
int main()
{
int a=10,*ptr;
ptr=&a;
cout<<"value in the variable is :"<<a<<endl;
cout<<"value in the pointer variable is :"<<*ptr<<endl;
cout<<"address of the variable is :"<<&a<<endl;
cout<<"address hold by the pointer variable is :"<<ptr<<endl;
return 0;
}

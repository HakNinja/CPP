#include<iostream>
using namespace std;
int main()
{
int a=10,*ptr;
ptr=&a;
cout<<"value:"<<*ptr<<endl;
*ptr=*ptr/2;
cout<<"after manipulation:"<<*ptr<<endl;
return 0;
}

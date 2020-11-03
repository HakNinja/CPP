#include<iostream>
using namespace std;
void (*s)(int a,int b);
void sum(int a,int b)
{
cout<<"sum="<<a+b<<endl;
}

int main()
{sum(10,20);
s=&sum;
s(20,30);
return 0;
}

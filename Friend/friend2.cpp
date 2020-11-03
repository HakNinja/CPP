#include<iostream>
using namespace std;

class day;

class fri{
int a;
public:
void getdata()
{
cout<<"ENTERED DATA:"<<endl;
cin>>a;
}
friend int func(fri,day);
};

class day{
int b;
public:
void getdata()
{
cout<<"ENTERED DATA:"<<endl;
cin>>b;
}
friend int func(fri,day);
};

int func(fri f,day d)
{
return (f.a+d.b);
}

int main()
{
fri f;
f.getdata();
day d;
d.getdata();
cout<<"sum="<<func(f,d)<<endl;
return 0;
}

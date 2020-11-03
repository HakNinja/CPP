#include<iostream>
using namespace std;
class day
{int c;
public:
friend class fri;
};

class fri{
int a;
int b;
day d;
public:
void getdata()
{cout<<"ENTER DATA:"<<endl;
cin>>a;
cin>>b;
cin>>d.c;
}
void putdata()
{cout<<"ENTERED DATA:"<<endl;
cout<<"A="<<a<<endl;
cout<<"B="<<b<<endl;
cout<<"C="<<d.c<<endl;
}
};

int main()
{
fri f;
day d;
f.getdata();
f.putdata();
return 0;
}

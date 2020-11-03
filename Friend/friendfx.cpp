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
int func(day d);
};



class day{
int b;
public:
void getdata()
{
cout<<"ENTERED DATA:"<<endl;
cin>>b;
}
friend int fri::func(day d);
};

int fri::func(day d)
{
return(a+d.b);
}

int main()
{
fri f;
f.getdata();
day d;
d.getdata();
cout<<"sum= "<<f.func(d)<<endl;
return 0;
}

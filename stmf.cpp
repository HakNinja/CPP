#include<iostream>
using namespace std;
class item{
int id;
static int count; 
public:
void getdata()
{
id=++count;
}
void showcode()
{cout<<"OBJECT NUMBER="<<id<<endl;
}
static void showcount()
{cout<<"COUNT="<<count<<endl;
}
};
int item::count;
int main()
{
item a,b,c;
a.getdata();
b.getdata();
item::showcount();
c.getdata();
item::showcount();

a.showcode();
b.showcode();
c.showcode();
return 0;
}


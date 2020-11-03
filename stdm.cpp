#include<iostream>
using namespace std;
class item{
private:
int id;
static int count; 
public:
void getdata(int a)
{
id=a;
count++;
}
void getcount()
{cout<<"count="<<count<<endl;
}
};
int item::count;
int main()
{
item a,b,c;
a.getcount();
b.getcount();
c.getcount();

a.getdata(100);
b.getdata(200);
c.getdata(300);
cout<<endl<<"DATA AFTER READING:"<<endl;
a.getcount();
b.getcount();
c.getcount();
return 0;
}
























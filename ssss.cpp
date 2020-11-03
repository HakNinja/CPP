#include<iostream>
using namespace std;
class Item
{int id;

public:
int count;
void getdata()
{int f;
cout<<"ENTER NUMBER OF PRODUCT ADD";
cin>>f;
count=count+f;
}
void sell()
{int f;
cout<<"ENTER NUMBER OF PRODUCT sell";
cin>>f;
count=count-f;
}
void rem()
{
cout<<endl<<"ENTER NUMBER OF PRODUCT remaining :";
cout<<count;
}
};
int main()
{int f,l,c,i;
Item a[10];
cout<<"Number of product adding:";
for (i=0;i<10;i++)
       a[i].count=0;

while(1)
{
cout<<"\n---------------MENU-----------------\n";
cout<<"\n--ITEM LIST------------\n";
cout<<"1.ADDING PRODUCT\n";
cout<<"2.SELLING PRODUCT\n";
cout<<"3.REMAINING PRODUCT\n";
cout<<"4.EXIT\n";
cout<<"\tENTER CHOICE:";
cin>>c;
switch(c)
{
case 1:cout<<"ENTER ID OF PRODUCT:";
cin>>f;

a[f].getdata();
cout<<"DATA IS UPDATED";
break;
case 2:cout<<"ENTER id of product SELL:";
cin>>l;
a[l].sell();
cout<<"DATA IS UPDATED";
case 3:cout<<"Show product:";
for (i=0;i<10;i++)
    a[i].Item::rem();
break;
case 4:
return 0;
default:cout<<"\tINVALID VALUE!!!\n";
}
}
return 0;
}

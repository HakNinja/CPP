#include<iostream>
using namespace std;
class Emp{
int id;
char name[20];
float salary;
public:
void getdata()
{
cout<<"ENTER DATA:\n";
cout<<"ENTER ID:";
cin>>id;
cout<<"NAME:";
cin>>name;
cout<<"SALARY:";
cin>>salary;
}
void putdata()
{
cout<<"DATA OF EMPLOYEE ID:"<<id<<" :\n";
cout<<"NAME:"<<name<<endl;
cout<<"SALARY:"<<salary<<endl;
}
};
int main()
{
Emp e1,e2,e3;
e1.getdata();
e2.getdata();
e3.getdata();
cout<<endl<<"EMPLOYEE DATA:"<<endl;
cout<<"---------------------------"<<endl;
e1.putdata();
e2.putdata();
e3.putdata();
return 0;
}

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
cout<<id<<"\t"<<name<<"\t"<<"\t"<<salary<<endl;
}
};
int main()
{int i;
Emp e[3];
for(i=0;i<3;i++)
e[i].getdata();
cout<<endl<<endl<<"EMPLOYEE DATA:"<<endl;
cout<<"----------------------------------"<<endl;
cout<<"ID \t NAME \t SALARY"<<endl;
cout<<"----------------------------------"<<endl;
for(i=0;i<3;i++)
e[i].putdata();
return 0;
}
























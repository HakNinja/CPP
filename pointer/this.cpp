#include<iostream>
using namespace std;
class Student{
int i;
int j;
public:

void getdata(int i,int j)
{
this->i=i;
this->j=j;
}
void putdata()
{
cout<<"i= "<<i<<"  "<<"j= "<<j<<endl; 
}
};

int main()
{
Student e;
e.getdata(10,20);
e.putdata();
return 0;
}

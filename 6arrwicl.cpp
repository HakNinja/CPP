
/*                     PROGRAM 6
OBJECTIVE : Write a program in C++ to demonstrate the concept of arrays within a class.

*/


#include<iostream>
using namespace std;

class Emp{
int id;
char name[20]; //array within class
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
cout<<"DATA OF EMPLOYEE ID:"<<id<<endl;
cout<<"NAME:"<<name<<endl;
cout<<"SALARY:"<<salary<<endl;
}
};

int main()
{
Emp e1;
e1.getdata();
cout<<endl<<"---------------------------";
cout<<endl<<"EMPLOYEE DATA:"<<endl;
cout<<"---------------------------"<<endl;
e1.putdata();
cout<<"---------------------------"<<endl;
return 0;
}


/*   OUTPUT:
 
ENTER DATA:
ENTER ID:1232
NAME:Tony
SALARY:39900   

---------------------------
EMPLOYEE DATA:
---------------------------
DATA OF EMPLOYEE ID:1232
NAME:Tony
SALARY:39900
---------------------------
 
 */

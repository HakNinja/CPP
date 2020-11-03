
/*                     PROGRAM 5
OBJECTIVE : Write a program in C++ in which a member function can be called inside the another member function of the same class.

*/


#include<iostream>
using namespace std;

class Student{
int rno;
char name[20];
float marks;
char g;
public:
void valid(float f)
{
if (f<=100 && f>=0)
cout<<"VALID DATA";
else
cout<<"INVALID DATA";
}
void getdata()
{
cout<<"ENTER DATA:\n";
cout<<"ENTER ROLL NUMBER:";
cin>>rno;
cout<<"NAME OF STUDENT:";
cin>>name;
cout<<"OVERALL MARKS:";
cin>>marks;
}
void putdata()
{
cout<<"DATA OF STUDENT ROLL NUMBER: "<<rno<<"\n";
cout<<"NAME OF STUDENT:"<<name<<endl;
cout<<"OVERALL MARKS:"<<marks<<endl;
valid(marks);
cout<<endl<<endl; 
}
};

int main()
{
int n,i;
Student e[100];
cout<<"TOTAL NUMBERS OF STUDENT: ";
cin>>n;
for(i=0;i<n;i++)
  e[i].getdata();
cout<<endl<<"---------------------------";
cout<<"\nSTUDENT DATA:"<<endl;
cout<<"---------------------------"<<endl;
for(i=0;i<n;i++)
  e[i].putdata();
cout<<"---------------------------"<<endl;
return 0;
}


/*   OUTPUT:
 
TOTAL NUMBERS OF STUDENT: 3
ENTER DATA:
ENTER ROLL NUMBER:1
NAME OF STUDENT:Tony
OVERALL MARKS:90
ENTER DATA:
ENTER ROLL NUMBER:2
NAME OF STUDENT:Sam
OVERALL MARKS:78
ENTER DATA:
ENTER ROLL NUMBER:3
NAME OF STUDENT:steve
OVERALL MARKS:67

---------------------------
STUDENT DATA:
---------------------------
DATA OF STUDENT ROLL NUMBER: 1
NAME OF STUDENT:Tony
OVERALL MARKS:90
VALID DATA

DATA OF STUDENT ROLL NUMBER: 2
NAME OF STUDENT:Sam
OVERALL MARKS:78
VALID DATA

DATA OF STUDENT ROLL NUMBER: 3
NAME OF STUDENT:steve
OVERALL MARKS:67
VALID DATA

---------------------------
 
 */

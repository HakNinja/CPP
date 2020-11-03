
/*                     PROGRAM 10
OBJECTIVE : Write a program in C++ that contains one constructor and one destructor.

*/


#include<iostream>
using namespace std;

class Construct{
int x;
int y;
public:
Construct()
{
cout<<"CONSTRUCT IS CALLED"<<endl;
x=12;
y=10;
}
~Construct()
{
cout<<"DESTRUCTOR IS CALLED"<<endl;
}
void display()
{
cout<<"x="<<x<<" ,y="<<y<<endl;
}
};

int main()
{
Construct c1;
cout<<"I'AM THE MAIN FUNCTION"<<endl;
c1.display();
return 0;
}


/*   OUTPUT:
 
CONSTRUCT IS CALLED
I'AM THE MAIN FUNCTION
x=12 ,y=10
DESTRUCTOR IS CALLED
 
 */


/*                     PROGRAM 8 
OBJECTIVE : Write a program in C++ to demonstrate the concept of Friend function.

*/


#include<iostream>
using namespace std;

class fri{
int a;
int b;
public:
void putdata()
{
cout<<"ENTERED DATA:"<<endl;
cout<<"A:"<<a<<endl;
cout<<"B:"<<b<<endl;
}
friend fri func(fri);
};

fri func(fri f)
{
cout<<"ENTER DATA:\n";
cout<<"A:";
cin>>f.a;
cout<<"B:";
cin>>f.b;
return f;
}

int main()
{
fri f;
f=func(f);
f.putdata();
return 0;
}


/*   OUTPUT:
 
ENTER DATA:
A:12
B:34
ENTERED DATA:
A:12
B:34

 */

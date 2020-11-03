
/*                     PROGRAM 1
OBJECTIVE : Write a program in C++ to calculate the factorial of a number.

*/


#include<iostream>
using namespace std;
int main()
{
int fact=1,n;
cout<<"ENTER NUMBER:";
cin>>n;
int i=n;
if(n<0)
cout<<"FACTORIAL OF "<<i<< " IS NOT DEFINED"<<endl;
else
{
while(n>0)
{
fact=fact*n;
n--;
}
cout<<"FACTORIAL OF "<<i<<" is "<<fact<<endl;
}
return 0;
}


/*   OUTPUT:
 
ENTER NUMBER:5
FACTORIAL OF 5 is 120
 
 */

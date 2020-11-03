
/*                     PROGRAM 2
OBJECTIVE : Write a program in C++ to show the use of function. 

*/


#include<iostream>
using namespace std;

int sum(int a,int b)
{
int ans;
ans=a+b;
return ans;
}

int main()
{
int f,s;
cout<<"ENTER FIRST NUMBER:";
cin>>f;
cout<<"ENTER SECOND NUMBER:";
cin>>s;
cout<<"SUM OF "<<f<<" AND "<<s<<" IS "<<sum(f,s)<<endl;
return 0;
}


/*   OUTPUT:
 
ENTER FIRST NUMBER:12
ENTER SECOND NUMBER:23
SUM OF 12 AND 23 IS 35
 
 */

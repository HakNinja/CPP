
/*                     PROGRAM 3  
OBJECTIVE : Write a program in C++ to show the use of inline function.

*/


#include<iostream>
using namespace std;

inline int sum(int a,int b)
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
 
ENTER FIRST NUMBER:23
ENTER SECOND NUMBER:34
SUM OF 23 AND 34 IS 57
 
 */

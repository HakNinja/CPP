#include<iostream>
using namespace std;
int main()
{int i;
int *ptr,s,n;
cout<<"enter size :";
cin>>n;
ptr=new int[n];
cout<<"Enter "<<n<<" value";
for(i=0;i<n;i++)
cin>>;

cout<<"value want to search :";
cin>>s;

for(i=0;i<n;i++)
{
if(*( )==s)
{
cout<<"found";
break;
}
else if(i==(n-1))
{
cout<<"not found";
}
}
return 0;
}

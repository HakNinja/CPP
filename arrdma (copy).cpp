#include<iostream>
using namespace std;
int main()
{int i,arr[100];
int *ptr,s,n;
cout<<"enter size :";
cin>>n;
ptr=arr;
cout<<"Enter "<<n<<" value";
for(i=0;i<n;i++)
cin>>arr[i];

cout<<"value want to search :";
cin>>s;

for(i=0;i<n;i++)
{
if(arr[i]==s)
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

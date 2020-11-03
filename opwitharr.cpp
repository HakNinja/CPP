#include<iostream>
using namespace std;
int main()
{int i;
int a[]={11,12,13,14,15,16,17,18,19,20},*ptr,s;
ptr=a;
cout<<"value want to search :";
cin>>s;
for(i=0;i<10;i++)
{
if(*(ptr+i)==s)
{
cout<<"found";
return 0;
}
}
cout<<"not found";
return 0;
}

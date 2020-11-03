//array in Cpp 
#include<iostream>
using namespace std;
int main()
{
int i,r=1,temp,n,a[100];
cout<<"numbers: ";
cin>>n;
cout<<" numbers in the array: ";
for(i=0;i<=n-1;i++)
{
cin>>a[i];
}
while(r<=2)
{
temp=a[0];
for(i=1;i<=n-1;i++)
{
a[i-1]=a[i];
}
a[n-1]=temp;
r++;
}
cout<<"the array after rotation is: ";
for(i=0;i<=n-1;i++)
{
cout<<a[i];
}
return 0;
}
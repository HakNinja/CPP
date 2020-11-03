#include<iostream>
using namespace std;
int main()
{
int i,j,a[100],n,c=0;
cout<<"numbers: ";
cin>>n;
cout<<" numbers in the array: ";
for(i=0;i<=n-1;i++)
{
cin>>a[i];
}

for(i=0;i<n-1;i++)
{
for(j=1+i;j<n;j++)
{
if((a[i]+a[j])%4==0)
c++;
}
}
cout<<c;
return 0;
}


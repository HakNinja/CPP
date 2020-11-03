
/*                     PROGRAM  4 
OBJECTIVE : Write a program in C++ to demonstrate the concept of function overloading.

*/


#include<iostream>
using namespace std;

int vol(int a)
{
int ans;
ans=a*a*a;
return ans;
}

int vol(int a,int b, int c)
{
int ans;
ans=a*b*c;
return ans;
}

int main()
{
int f,l,w,c;
while(1)
{
cout<<"\n---------------MENU-----------------\n";
cout<<"\n--FINDING THE VOLUME OF------------\n";
cout<<"1.CUBE\n";
cout<<"2.CUBOID\n";
cout<<"3.EXIT\n";
cout<<"\tENTER CHOICE:";
cin>>c;
switch(c)
{
case 1:cout<<"ENTER ONE SIDE OF CUBE:";
cin>>f;
cout<<"VOLUME OF CUBE OF SIDE "<<f<<" IS "<<vol(f)<<endl;
break;
case 2:cout<<"ENTER LENGHT OF CUBOID:";
cin>>l;
cout<<"ENTER WIDTH OF CUBOID:";
cin>>w;
cout<<"ENTER  HEIGHT CUBOID:";
cin>>f;
cout<<"VOLUME OF CUBOID OF SIDE "<<l<<", "<<w<<" and "<<f<<" IS "<<vol(l,f,w)<<endl;
break;
case 3:
return 0;
default:cout<<"\tINVALID VALUE!!!\n";
}
}
return 0;
}


/*   OUTPUT:
 

---------------MENU-----------------

--FINDING THE VOLUME OF------------
1.CUBE
2.CUBOID
3.EXIT
        ENTER CHOICE:1
ENTER ONE SIDE OF CUBE:12
VOLUME OF CUBE OF SIDE 12 IS 1728

---------------MENU-----------------

--FINDING THE VOLUME OF------------
1.CUBE
2.CUBOID
3.EXIT
        ENTER CHOICE:2
ENTER LENGHT OF CUBOID:2
ENTER WIDTH OF CUBOID:3
ENTER  HEIGHT CUBOID:4
VOLUME OF CUBOID OF SIDE 2, 3 and 4 IS 24

---------------MENU-----------------

--FINDING THE VOLUME OF------------
1.CUBE
2.CUBOID
3.EXIT
       ENTER CHOICE:3
 
 */

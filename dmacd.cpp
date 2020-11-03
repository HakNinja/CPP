#include<iostream>
using namespace std;
class Cube
{
public:
Cube()
{
cout<<"CONSTRUCT CALLED"<<endl;
}
~Cube()
{
cout<<"DESTRUCTOR CALLED"<<endl;
}
};
int main()
{
Cube *mycube=new Cube[5];
delete [] mycube;
return 0;
}

#include<iostream>
using namespace std;

class Student
{
protected:
int rno;
public:
void getrno(int i)
{
rno=i;
}
void putrno()
{
cout<<"Roll_number: "<<rno<<endl;
}
};

class Test:virtual public Student
{
protected:
float part1,part2;
public:
void getmarks(float m1,float m2)
{
part1=m1;
part2=m2;
}
void putmarks()
{
cout<<"Marks:"<<endl;
cout<<"Part_1:"<<part1<<"\t";
cout<<"Part_2:"<<part2<<"\t";
}
};

class Sport:virtual public Student 
{
protected:
float score;
public:
void inscore(float i)
{
score=i;
}
void outscore()
{
cout<<"Score="<<score<<endl;
}
};

class Result:public Test,public Sport
{
float total;
public:
void display()
{
total=part1+part2+score;
putrno();
putmarks();
outscore();
cout<<"Total score:\t"<<total<<endl; 
}
};

int main()
{

Result r;
r.getrno(10);
r.getmarks(20,40.9);
r.inscore(89.99);
r.display();
return 0;
}

#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;

class database
{
long int rollno,liscence;
string name,contact,clas,Div,Address;


public:


void getdata()
{

cout<<"\n Enter Your Details:\n";

cout<<"\n Enter Your name\n";
cin>>name;

cout<<"\n Enter Your Roll no.\n";
cin>>rollno;

cout<<"\n Enter Your Class\n";
cin>>clas;

cout<<"\n Enter Your Division\n";
cin>>Div;

cout<<"\n Enter Your Address\n";
cin>>Address;

cout<<"\n Enter Your Contact no.\n";
cin>>contact;

cout<<"\n Enter Your Liscence no.\n";
cin>>liscence;

}


void display()
{

cout<<"\n Your Roll no:"<<rollno;

cout<<"\n Your name:"<<name;

cout<<"\n Your Class:"<<clas;

cout<<"\n Your Division:"<<Div;

cout<<"\n Your Address:"<<Address;

cout<<"\n Enter Your Contact no:"<<contact;

cout<<"\n Enter Your Liscence no:"<<liscence<<endl;

}
database()
{
	name="Harrdy";
	rollno=59;
	contact="8625867057";
	liscence=995709;
	clas="SY";
	Div="A";
	Address="Rahata";

}
database (database &db1)
{
	name=db1.name;
	rollno=db1.rollno;
	contact=db1.contact;
	liscence=db1.liscence;
	clas=db1.clas;
	Div=db1.Div;
	Address=db1.Address;
}

};

int main()
{

database db1,d1;
int ch;

do
{
cout<<"\n\t *******MENU*******\n\t1.Display Default Data\n\t2.Display Copied Data\n\t0.Exit\n";
cout<<"\n\t Enter Your Choice:";
cin>>ch;
switch(ch)
{
case 1:
{
cout<<"\n \tData using Default Constructor\n";
db1.display();
break;
}

case 2:
{
d1.getdata();
database d2(d1);
cout<<"\n\t Data using Copy Constructor\n";
d2.display();
break;
}

case 0:{break;}

default:
cout<<"\n\tEnter Valid Choice\n";
}
}while(ch!=0);
return 0;
}

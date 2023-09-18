#include<iostream>
using namespace std;

class Television
{ 
 int model_no,size,price;
public:
 void getdata();
 void display();
};
void Television::getdata()
{
 cout<<"\nEnter the model number:";
 cin>>model_no;
 cout<<"\nEnter the screen size in inches:";
 cin>>size;
 cout<<"\nEnter price of television:";
 cin>>price;
}

void Television::display()
{
try 
{ 
 if(model_no>9999)
 throw model_no;
else if (size<12 || size>70)
 throw size;
else if (price<0 || price>5000)
 throw price;
else
{
 cout<<"\nThe Product Details are as Follows:";
 cout<<"\nModel No: "<<model_no;
 cout<<"\nScreen size: "<<size;
 cout<<"\nPrice of television: "<<price;
}
}
catch(int x)
{
 cout<<"\nException occurred!";
 model_no=0;
 size=0;
 price=0;
 cout<<"\nThe Details are as Follows:";
 cout<<"\nModel No: "<<model_no;
 cout<<"\nScreen size: "<<size;
 cout<<"\nPrice of television: "<<price;
}

}
int main ()
{
Television obj;
int ch;
do{
cout<<"\n\t*********MENU:*********\n\t1.Enter Product Details\n\t2.Display Product Details\n\t0.Exit"<<endl;

cout<<"\nEnter your choice:";
cin>>ch;
switch(ch)
{
case 1:
{
obj.getdata();
break;
}
case 2:
{
obj.display();
break;
}
case 0:
{
break;
}
default :
cout<<"Enter Valid Choice"<<endl;
break;
}

}while(ch!=0);

return 0;
}

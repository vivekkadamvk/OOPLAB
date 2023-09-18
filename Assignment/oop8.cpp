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
 cout<<"Enter the model number:";
 cin>>model_no;
 cout<<"Enter the screen size in inches:";
 cin>>size;
 cout<<"Enter price of television::";
 cin>>price;
}

void Television::display()
{
try 
{ 
 if(model_no>9999)
 throw model_no;
else if (size<10 || size>70)
 throw size;
else if (price<0 || price>5000)
 throw price;
else
{
 cout<<"\nThe details are as follows:";
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
 cout<<"\nThe details are as follows:";
 cout<<"\nModel No: "<<model_no;
 cout<<"\nScreen size: "<<size;
 cout<<"\nPrice of television: "<<price;
}

}
int main ()
{
Television obj;
obj.getdata();
obj.display();
return 0;
}

#include<iostream>
using namespace std;

class Complex
{
private:
	float real,imag;
public:

	Complex()
	{
	real=0.0;
	imag=0.0;
	}
	
	
void getdata()
{
	cout<<"Enter Your Real Number\n";
	cin>>real;
	cout<<"Enter Your Imaginary Number\n";
	cin>>imag;
}

void display()
{
	if(imag>0)
	{
	cout<<"Complex Number is: \n";
	cout<<real<<"+"<<imag<<"i\n";
	}
	else
	{
	cout<<"Complex Number is: \n";
	cout<<real<<imag<<"i\n";
	
	}
	

}

Complex operator +(Complex a)
{
	Complex b;
	b.real=real+a.real;
	b.imag=imag+a.imag;
	return b;
}

Complex operator -(Complex a)
{
	Complex b;
	b.real=real-a.real;
	b.imag=imag-a.imag;
	return b;
}



};

int main()
{
	int ch;
	Complex a,b,c,d,e,f;
	cout<<"Enter First Complex Number\n";
	a.getdata();
	a.display();
	cout<<"Enter Second Complex Number\n";
	b.getdata();
	b.display();	
	do{
	cout<<"MENU:\n1.Addition\n2.Subtraction\n0.Exit\n";
	cout<<"Enter Your Choice: ";
	cin>>ch;
	
	e=a+b;
	f=a-b;
	if(ch==1)
	{
	e.display();
	}
	if(ch==2)
	{
	f.display();
	}
	}while(ch!=0);
return 0;
}



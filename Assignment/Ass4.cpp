#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;

class Book
{
	public:
	char K[50],B[50],C[50];
	int N,P;
	
	
	
	Book()
	{
	int N=P=0;
	}

void getdata()
{
	cout<<"Enter the Following Details:\n";
	cin.ignore();
	cout<<"Enter the Title of Book:\n";
	cin.getline(B,50);
        cout<<"Enter the Name of Author:\n";
	cin.getline(K,50);
	cout<<"Enter the Publisher of Book:\n";
	cin.getline(C,50);
	cout<<"Enter the Stock Value:\n";
	cin>>N;
	cout<<"Enter the Price of Book:\n";
	cin>>P;
}

void calcu()
{
	char a[50],b[50],c[50];
	int n,p;
	cout<<"Enter the Following Details:\n";
	cin.ignore();
        cout<<"Search the Title of Book:\n";
	cin.getline(b,50);
	cout<<"Search Author Name:\n";
	cin.getline(a,50);
	cout<<"Search the Publisher of Book:\n";
	cin.getline(c,50);
	
	
	if (!strcmp(K,a) && !strcmp(B,b) && !strcmp(C,c))
	{
	cout<<"\n\tBook Is Available\n";
	cout<<"Enter the Number of Books required: ";
	cin>>n;
	p=n*P;
	cout<<"\n\tMoney Required is: "<<p;
	}
	else
	{
	cout<<"Book is Not Available\n";
	}
}	
};
	int main()
{
	int ch;
	Book b1;
	do{
	cout<<"\n\n\tMENU:\n1.Enter Book Data\n2.Search Book Data\n3.Exit\n";
	cout<<"Enter Your Choice:\n";
	cin>>ch;
	switch(ch)
	{
	case 1:
	{
	b1.getdata();
	
	break;
	}
	case 2:
	{
	b1.calcu();
	
	break;
	}
	case 3:
	{
	exit(1);
	}
	}
	}while(ch!=0);
	return 0;

	
}	
	
	
	
	

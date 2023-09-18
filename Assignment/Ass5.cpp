#include <iostream>
using namespace std;
int n;
#define size 50
template <class T>




void sort(T Arr[size])

{
T Temp;
int i,j;
for (i=0;i<n-1;i++)
{

	for(j=i+1;j<n;j++)
	{
		if (Arr[j]<Arr[i])
		{	
		Temp=Arr[i];
		Arr[i]=Arr[j];
		Arr[j]=Temp;
		}
	}
}
	cout<<"\nSorted Array:\n\n";
	
	for(i=0;i<n;i++)
	cout<<"\t "<<Arr[i];	

}	
int main()
{
	int A[size];
	float B[size];
	int i,ch;

do
{

cout<<"\n\n\tSelection Sort Using Function Template\n";

cout<<"\n\t\t******** MENU ********\n";

cout<<"\n1. Sort on Integer Numbers\n";

cout<<"\n2. Sort on Float Numbers\n";

cout<<"\n0. Exit\n";

cout<<"\nEnter Your Choice:";
cin>>ch;

switch(ch)

{
 case 1:
 
	cout<<"\nEnter the Total Number of Int:";
	cin>>n;
	cout<<"\nEnter Your Element:\n";
	for(i=0;i<n;i++)
	{
	
	cin>>A[i];
	}	
	
	sort(A);
	break;
 case 2:

	cout<<"\nEnter the Total Number of Float:";

	cin>>n;
	cout<<"\nEnter Your Elements:\n";
	for(i=0;i<n;i++)
	{
	
	cin>>B[i];
	}

	sort(B);
	break;
 case 0:

	break;
 default:
 
 	cout<<"\nEnter Correct Choice:\n";
 	
}
}while(ch!=0);

return 0;
}


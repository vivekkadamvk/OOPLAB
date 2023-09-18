#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;

int main()
{
char fname[20];

ofstream out;
cout<<"\n\tWriting Section\n";
cout<<"Enter your Filename\n";
cin>>fname;
out.open(fname);
cout<<"Enter your Data To be stored in the file\n";

cout<<"Enter your First Name:\n";
char fname1[20];
cin>>fname1;
out<<fname1<<"\n";

cout<<"Enter your Last Name:\n";
char lname[20];
cin>>lname;
out<<lname<<"\n";

cout<<"Enter your Roll Number:\n";
int roll;
cin>>roll;
out<<roll<<"\n";

/*while(D=getchar()!='#')
{
out<<D;
}
out.close();*/

ifstream in;
cout<<"\n\tReading Section\n";
cout<<"Enter your Filename\n";
char fname2[20];
cin>>fname2;
in.open(fname2);
in>>fname1;
in>>lname;
in>>roll;
cout<<endl;
cout<<"First Name: "<<fname1<<endl;
cout<<"Last Name: "<<lname<<endl;
cout<<"Roll Number: "<<roll<<endl;
in.close();

return 0;
}

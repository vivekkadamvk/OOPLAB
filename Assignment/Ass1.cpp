#include <iostream>
using namespace std;

class Student
{
public:
    int p, c, m, roll;
    char name[30];
    float avg, per, total;

    void accept()
    {
        cout << "\nEnter roll no of student:";
        cin >> roll;
        cout << "\nEnter name of student:";
        cin >> name;
        cout << "\nEnter the marks in Physics:";
        cin >> p;
        cout << "\nEnter the marks in Chemistry:";
        cin >> c;
        cout << "\nEnter the marks in Maths:";
        cin >> m;
    }

    void calculate()
    {
        total = p + c + m;
        avg = total / 3;
        per = (total / 300) * 100;
	
    }

    void display()
    {
        cout << "\n\t Roll no.:" << roll;
        cout << "\n\t Name:" << name;
        cout << "\n\t Total:" << total;
        cout << "\n\t Average:" << avg;
        cout << "\n\t Percentage:" << per;
	if(35 > per)
            {cout << "\n Fail.\n";}
        else if(35<per && per< 60)
            {cout << "\n Passed.\n";
	}        
        else if(60 <= per && per < 75)
            {cout << "\n\t Passed in First Class.\n";
	}
	else if(75 <= per && per <= 100)
            {cout << "\n\t Passed in Distinction.\n";
	}
    }   
};

int main()
{
    Student v;
    int ch;
    do{
    cout<<"\n\t*********MENU:**********\n\n\t1.Enter Data \n\t2.Display data\n\t3.Exit\n";
    cout<<"\tEnter Your Choice: ";
    cin>>ch;
    switch(ch)
{
   case 1:
{
	v.accept();
break;
}
   case 2:
{
 v.calculate();
    v.display();
break;
    }

}
}while(ch!=3);
return 0;
}

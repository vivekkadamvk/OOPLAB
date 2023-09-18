#include<iostream>
using namespace std;

class student
{
    public:
    int ds,em,oop,osa;
    float total,avg,per;
    string name;


    void accept()
    {
        cout<<"Enter your Name:";
        cin>>name;
        cout<<"Enter DS marks:";
        cin>>ds;
        cout<<"Enter EM marks:";
        cin>>em;
        cout<<"Enter OOP marks:";
        cin>>oop;
        cout<<"Enter OSA marks:";
        cin>>osa;
    }
    void display()
    {
        total=ds+em+osa+oop;
        avg=per=total/4;

    
    
    
        cout<<"Name:"<<name<<endl;
        cout<<"Total:"<<total<<endl;
        cout<<"Average:"<<avg<<endl;
        cout<<"Percentage:"<<per<<"%"<<endl;
    

    }


};

int main()
{
    int ch;
    student obj;
 do{   cout<<"\nMENU:\n1.Enter Data\n2.Display Result\n0.exit\n";
    cout<<"Enter your choice:";
    cin>>ch;
 

 switch(ch)
    {
        case 1:
        {
            obj.accept();
            break;
        }

        case 2:
        {
            obj.display();
            break;
        }
        default:
        exit;
    }
 }while(ch!=0); 
    return 0;
}
#include<iostream>
using namespace std;

class weather
{
	public:
	int day,amt_rain,amt_snow,high_temp,low_temp;

	void take()
	{
		cout<<"Enter the Day: ";
		cin>>day;
		cout<<"Enter the Amount of Rain: ";
		cin>>amt_rain;
		cout<<"Amount of Snow: ";
		cin>>amt_snow;
		cout<<"High temp: ";
		cin>>high_temp;
		cout<<"Low temp: ";
		cin>>low_temp;
	}
	
	void display1()
	{
		cout<<day<<"\t"<<amt_rain<<"\t\t"<<amt_snow<<"\t\t"<<high_temp<<"\t\t"<<low_temp<<endl;
	}
};
int main()
{
	
	
	int a,b;
	float sum1=0,sum2=0,sum3=0,sum4=0,avg1=0,avg2=0,avg3=0,avg4=0;
	weather c[10];
	do{
	cout<<"\n\tMENU:\n";	
	cout<<"1-Add Data to Chart \n2-Display Data \n3-Exit"<<endl;
	cin>>a;
	if(a==1){
		cout<<"Enter the Number of Days for which data is to be Inserted ";
		cin>>b;
		for(int i=1;i<=b;i++){
			c[i].take();
		}
		}
	if(a==2){
		cout<<"\n\t***************** Weather Report ****************\t\n";
		cout<<"Day\tAmt.rain\tAmt.snow\tHigh.temp\tLow.temp"<<endl;
		for(int i=1;i<=b;i++){
			c[i].display1();
		}
		for(int i=1;i<=b;i++){
			sum1=sum1+c[i].amt_rain;
			sum2=sum2+c[i].amt_snow;
			sum3=sum3+c[i].high_temp;
			sum4=sum4+c[i].low_temp;
		}
		avg1=sum1/b;
		avg2=sum2/b;
		avg3=sum3/b;
		avg4=sum4/b;
		cout<<"Avg     "<<avg1<<"\t\t"<<avg2<<"\t\t"<<avg3<<"\t\t"<<avg4<<endl;
		}
}while(a!=3);
return 0;
}



#include<iostream>
using namespace std;
class Weather_report
{
public:
  int d, day;
  float low_temp, high_temp, amt_rain, amt_snow;
  void getdata ();
  void display ();
    Weather_report ()
  {
    int day = 99;
    float high_temp = 999;
    float low_temp = -999;
    float amt_rain = 0;
    float amt_snow = 0;
  }
};
void
Weather_report::getdata ()
{
  cout << "\nEnter the Day\n";
  cin >> day;
  cout << "Enter the High Temperature\n";
  cin >> high_temp;
  cout << "Enter the Low Temperature\n";
  cin >> low_temp;
  cout << "Enter the Amount of Rain\n";
  cin >> amt_rain;
  cout << "Enter the Amount of Snow\n";
  cin >> amt_snow;
}

void
Weather_report::display ()
{
  cout << " " << day << "\t" << amt_rain << "\t\t" << amt_snow << "\t\t" <<
    high_temp << "\t\t" << low_temp << endl;


}

int
main ()
{

    
      int ch;
      float d;
      float avghtemp = 0, avgltemp = 0, avgsnow = 0, avgrain = 0;
      int a = 0, b = 0, c = 0, e = 0;

      Weather_report w[31];

      do{

	cout << "\n\t MENU:\n1.Enter Data\n2.Display Data\n3.Exit\n";
	cout << "Enter Your Choice: ";
	cin >> ch;



	switch (ch)
	  {

	  case 1:
	    cout << "\nEnter The no.of Days\n";
	    cin >> d;
	    for (int i = 1; i <= d; i++)
	      {
		w[i].getdata ();
	      }
	    break;

	  case 2:
	    cout<<"\n\n\t  *********** Weather Report ***********\n";
	    cout << "\nDay\tamt. rain\tamt. snow\thigh temp.\tlow temp." << endl;
	    for (int i = 1; i <= d; i++)
	      {
		w[i].display ();
	      }
	    for (int i = 1; i <= d; i++)
	      {
		a = a + w[i].high_temp;


		b = b + w[i].low_temp;


		c = c + w[i].amt_snow;


		e = e + w[i].amt_rain;
		avgrain = e / d;
		avgsnow = c / d;
		avghtemp = a / d;
		avgltemp = b / d;

	      }
	    cout << "Avg: " << "\t" << avgrain << "\t\t" << avgsnow << "\t\t"
	      << avghtemp << "\t\t" << avgltemp << endl;


	    break;
	  }
      }while(ch!=3);
return 0;
}





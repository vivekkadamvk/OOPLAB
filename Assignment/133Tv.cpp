#include<iostream>
using namespace std;
class telivision
{
Private:
int model_no,size,price
Public:
void read()
{ 
  cout<<"Enter the details for TV"<<end;
  cout<<"Enter the model no for TV"<<end;
  cin>>model_no;
  cout<<"Enter the size for TV"<<end;
  cin>>size;
  cout<<"Enter the price for TV"<<end;
  cout>>price;
  }
  void display(televisionP[20],int k)
  {
    cout<<"Display details=  ";
    for (int i=0;i<n;i++)
      try
        {
           if(P[i].model no>9999)
           {
              throw P[i].model no;
           }
else if (P[i].size <12 || P[i].size>70)
          throw P[i].size;
else if (P[i].prize<0||P[i].price >5000)
         throw P[i].price;
 else
   {
     cout<<"model no ="<<model no<<"\t;
     size="<<size<<"\t price ="<<price;
    }
     }
  catch(int x)
  {
    cout<<"Exception occurs ";
    P[i].model no=0;
    P[i].price=0;
    P[i].size=0;
  cout<<"model no="<<P[i]model no<<"RE\n size ="<<P[i].size<<"\t price ="<<P[i].Price;
  }
  }
  
  int main()
  {
  television obj[20],T;
  {
     cout<<"\n Enter no of television=";
     int n;
     cin>>n;
     for ( int i=0;i<n;i++)
     {
         obj.read();
       } 
       T.display(obj,n);
        return 0;
        }    
      
      
      
      
      
      
      
              
              
              
              
              
              
              
              
              
              
              
              
              
              

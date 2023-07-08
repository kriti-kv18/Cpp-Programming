#include <iostream>
using namespace std;
class Vehical
{
    int price,milege;
    public:
    void get_vehical()
    {
        cout<<"\nEnter the milege:";
        cin>>milege;
        cout<<"\nEnter the price:";
        cin>>price;
    }
    void display_vehical()
    {
        cout<<"\nMilege:"<<milege;
        cout<<"\nPrice:"<<price;
    }
};
class car:public  Vehical
{
    int ownership_cost;
    int warranty,seating_capacity;
    string fuel_type;
    public:
    void get_car()
    {
        get_vehical();
        cout<<"\nEnter ownership cost:";
        cin>>ownership_cost;
        cout<<"\nEnter warranty in years:";
        cin>>warranty;
        cout<<"\nEnter seating capacity:";
        cin>>seating_capacity;
        cout<<"\nEnter fuel type(petrol/diesel):";
        cin>>fuel_type;
    }
    void display_car()
    {
        display_vehical();
        cout<<"\nOwnership cost:"<<ownership_cost;
        cout<<"\nwarranty in years:"<<warranty;
        cout<<"\nSeating capacity:"<<seating_capacity;
        cout<<"\nFuel type(petrol/diesel):"<<fuel_type;
    }
};
class Ford:public car
{
    string  model_type;
    public:
    void getdata()
    {
        cout<<"Gettiung the details of Ford:";
        get_car();
        cout<<"\nEnter the model type:";
        cin>>model_type;
    }
    void display()
    { 
        cout<<"Displaying the details of Ford";
        display_car();
        cout<<"\nModel type is:"<<model_type;
    }
};
class Audi:public car
{
    string  model_type;
    public:
    void getdata()
    {
        cout<<"Gettiung the details of Audi:";
        get_car();
        cout<<"\nEnter the model type:";
        cin>>model_type;
    }
    void display()
    {
        cout<<"Displaying the details of Audi";
        display_car();
        cout<<"\nModel type is:"<<model_type;
    }
};
class Bike:public Vehical
{
  int number_of_cylinders,number_of_gears;
  string cooling_type, wheel_type;
  int fuel_tank_size;
  public:
  void get_bike()
   {
      get_vehical();
      cout<<"\nEnter the number of cylinder:";
      cin>>number_of_cylinders;
      cout<<"\nEnter the number of gears:";
      cin>>number_of_gears;
      cout<<"\nEnter cooling type(air, liquid or oil)";
      cin>>cooling_type;
      cout<<"\nEnter wheel type(alloys or spokes)";
      cin>>wheel_type;
      cout<<"\nEnter fuel type size(in inches)";
      cin>>fuel_tank_size;
   }
void display_bike()
{
  display_vehical();
  cout<<"\nNumber of cylinder:"<<number_of_cylinders;
  cout<<"\nNumber of gears:"<<number_of_gears;
  cout<<"\nBCooling type(air, liquid or oil)"<<cooling_type;
  cout<<"\nWheel type(alloys or spokes)"<<wheel_type;
  cout<<"\nFuel type size(in inches)"<<fuel_tank_size;     
}
};
class Bajaj:public Bike
{
  string make_type;
  public:
  void getdata()
    { 
      cout<<"Getting the details of Bajaj";
      get_bike();
      cout<<"\nEnter the maker type:";
      cin>>make_type;
    }
void display()
  {
    cout<<"Displaying the details of Bajaj";
    display_bike();
    cout<<"\nMake type:"<<make_type;
  }
};
class Tvs:public Bike
{ 
  string make_type;
  public:
  void getdata()
    { 
      cout<<"Getting the details of TVS";
      get_bike();
      cout<<"\nEnter the maker type:";
      cin>>make_type;
    }
void display()
  {
    cout<<"Displaying the details of TVS";
    display_bike();
    cout<<"\nMake type:"<<make_type;
  }
};
int main() 
{
   Ford f;
   Audi a;
   Bajaj b;
   Tvs t;
   int c=1,ch,ch2,ch3;
   while(c==1)
    {
      cout<<"\n!!!!MENU!!!!!!!";
      cout<<"\n1.CAR DETAILS";
      cout<<"\n2.BIKE DETAILS";
      cout<<"\nEnter yuour choice:";
      cin>>ch;
      switch(ch)
        {
          case 1:
          cout<<"\n1.FORD";
          cout<<"\n2.AUDI";
          cout<<"\nEnter yuour choice:";
          cin>>ch2;
          switch(ch2)
            {
              case 1:
              f.getdata();
              f.display();
              break;
              case 2:
              a.getdata();
              a.display();
              break; 
              default:
              cout<<"Worng choice!!!!";
            }
          break; 
          case 2:
          cout<<"\n1.BAJAJ DETAILS";
          cout<<"\n2.TVS DETAILS";
          cout<<"\nEnter yuour choice:";
          cin>>ch3;
          switch(ch3)
            {
              case 1:
              b.getdata();
              b.display();
              break;
              case 2:
              t.getdata();
              t.display();
              break;
              default:
              cout<<"Wrong choice!!!!!";
            }
          break;
          default:
          cout<<"Wrong choice!!!";
        }
      cout<<"Want to continue:";
      cin>>c;
    }
  return 0;
}

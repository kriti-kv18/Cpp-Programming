#include <iostream>
using namespace std;
class Shape
{
   public:
   double l,b;
   virtual void getdata()=0;
   virtual void display()=0;
};
class Triangle:public Shape
{
    void getdata()
      {
         cout<<"Enter the Base and Height of the tringle:";
         cin>>l>>b;
      }
    void display()
      {
        double area;
        area=0.5*l*b;
        cout<<"The Area of the Tringle is:"<<area;
      }
};
class Rectangle:public Shape
{
    void getdata()
      {
         cout<<"Enter the Length and Breadth of the rectangle:";
         cin>>l>>b;
      }
    void display()
      {
        double area;
        area=l*b;
        cout<<"The Area of the Rectangle is:"<<area;
      }
};
int main() 
{
   Shape * s=new Triangle;
   Shape* s1;
   Rectangle r;
   s1=&r;
  int ch,c=1;
  while(c==1)
    {
      cout<<"\n!!!!MENU!!!!!";
      cout<<"\n1.TRIANGLE";
      cout<<"\n2.RECTANGLE";
      cout<<"\nEnter your choice:";
      cin>>ch;
      switch(ch)
        {
          case 1:
            cout<<"\nGETTING THE DATA\n";
            s->getdata();
            cout<<"\nDISPLAYING THE DATA\n";
            s->display();
          break;
          case 2:
            cout<<"\nGETTING THE DATA\n";
            s1->getdata();
            cout<<"\nDISPLAYING THE DATA\n";
            s1->display();
          break;
        }
      cout<<"\nWant to continue:";
      cin>>c;
    }
}

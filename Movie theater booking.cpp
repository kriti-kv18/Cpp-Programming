#include <iostream>
using namespace std;

class node
{
  public:
   int seat;
   char status;
   node* next,*pre;
};

class Cinemax
{
  node* head[10];
  public:
    Cinemax()
     {
        for(int i=0;i<10;i++)
          head[i]=NULL;
     }
    void create()
     {
         node* temp,*newnode;
       for(int i=0;i<10;i++)
         {
            temp=head[i];
           for(int j=1;j<=10;j++)
             {
               newnode=new node;
               newnode->seat=j;
               newnode->next=NULL;
               newnode->status='A';
               newnode->pre=NULL;
               temp=head[i];
               if(head[i]==NULL)
               {
                 head[i]=newnode;
                 newnode->pre=head[i];
               }
               else
               {
                 while(temp->next!=NULL)
                   {
                     temp=temp->next;
                   }
                 temp->next=newnode;
                 newnode->pre=temp;
               }
             }
         }
     }
void display()
  {
     for(int i=0;i<10;i++)
         {
           node* temp=head[i];
           cout<<i+1<<" ";
           for(int j=0;j<10;j++)
             {
               if(temp->status=='B')
               {
                 cout<<"\033[1;31m"<<"XX"<<"\033[0m"<<"  ";
                 temp=temp->next;
               }  
               else
               {
                  cout<<"\033[1;32m"<<char(i+65)<<temp->seat<<"\033[0m"<<"  ";
                  temp=temp->next;
               }
                
             }
           //cout<<"Null";
           cout<<endl;
          }
    }
void book_ticket()
  {
     cout<<"\nDisplaying the seata available to be booked\n";
     display();
     int chair,row;
     int ans=1;
  while(ans)
    {
      if(ans!=1)
        break;
     cout<<"Enter the Row number please:";
     cin>>row;
     cout<<"Enter the Seat number you want:";
     cin>>chair;
     node* temp=head[row-1];
     while(temp->seat!=chair)
       {
         temp=temp->next;
       }
    if(temp->status=='A')
    {
      temp->status='B';
    } 
    else
      cout<<"Already booked\n";
      cout<<"Continue??";
      cin>>ans;
  }
}   
void cancellation()
{
    int chair,row;
     cout<<"Enter the Row number please:";
     cin>>row;
     cout<<"Enter the Seat number you want:";
     cin>>chair;
     node* temp=head[row-1];
     while(temp->seat!=chair)
       {
         temp=temp->next;
       }
    if(temp->status=='B')
    {
      temp->status='A';
    } 
  else
      cout<<"The seat is already available can't be cancelled";
}
};

int main() {
  Cinemax c;
  int a=1,ch;
   c.create();
  while(a==1)
    {
      cout<<"\n!!!!!!!MENU!!!!!!!!";
      cout<<"\n1.TO DISPLAY THE AVAILABLE SEATS";
      cout<<"\n2.TO BOOK TICKETS";
      cout<<"\n3.TO CANCEL THE TICKETS";
      cout<<"\nEnter your choice:";
      cin>>ch;
      switch(ch)
        {
          case 1:
          c.display();
          break;
          case 2:
          c.book_ticket();
          cout<<endl;
          c.display();  
          break;
          case 3:
            int b=1;
            while(b==1)
              {
                 c.cancellation();
                 cout<<"\nWant to cancel more";
                 cin>>b;
              }
          c.display();
        }
      cout<<"\nwant to continue:";
      cin>>a;
    }
  return 0;
}

#include <iostream>
#include <vector>
using namespace std;
template <class T>
class vector<T>
{
  public:
   T v[10];
  int size=0;
  vector()
    {
        for(int i=0;i<10;i++)
          {
            v[i]=0;
          }
    }
  void create()
    {
       T val;
       int i,ans=1;
       do
       {
         if(ans!=1)
           break;
         cout<<"Enter the index to store the element:";
         cin>>i;
         cout<<"Enter tehe value that you want to store:";
         cin>>val;
         v[i]=val;
         size++;
         cout<<"Want to continue:";
         cin>>ans;
       }while(ans==1);
    }
   void display()
     {
         cout<<"The size of the array is:"<<size<<endl;
         cout<<"\nThe elements are:";
         cout<<"\n{";
         for(int i=1;i<=size;i++)
           {
             cout<<v[i]<<",";
           }
       cout<<"}";
     }
  void modify()
    {
        int key;
        T newval;
        cout<<"Enter the index to be modified:";
        cin>>key;
        cout<<"Enter the new value:";
        cin>>newval;
        v[key]=newval;
    }
  void multiply()
    {
       int scalval;
       cout<<"Enter the scalar value for for multiplication:";
       cin>>scalval;
       for(int i=1;i<=size;i++)
         {
           v[i]=v[i]*scalval;
         }
    }
};
int main() {
  vector <int> v;
  int ans=1,ch;
  while(ans==1)
    {
      cout<<"\n1.CREATE AN ARRAY";
      cout<<"\n2.DISPLAY THE ARRAY";
      cout<<"\n3.MODIFY AN ARRAY";
      cout<<"\n4.MULTIPLICATION";
      cout<<"\nEnter your choice:";
      cin>>ch;
      switch(ch)
        {
          case 1:
           v.create();
          break;
          case 2:
          v.display();
          break;
          case 3:
          v.modify();
          break;
          case 4:
          v.multiply();
          break;
        }
      cout<<"\nWant to continue:";
      cin>>ans;
    }
  return 0;
}

#include <iostream>
#include<map>
#include<iomanip>
using namespace std;
struct DOB{
int day,month,year;
};
class Details
{
public:
long long telephoneNumber;
DOB date;
Details(long long telephoneNumber, int day, int month, int year)
{
this->telephoneNumber= telephoneNumber;
date.day=day;
date.month=month;
date.year=year;
}
Details(){}
};

void addDetails(map<string ,Details>&data)
{
  char option;
string name;
  int day,month,year;
  long long teleph;
  while(1)
  {
      cout<<"Enter the name : ";
    cin>>name;
    cout<<"Enter Date of Birth int format dd/mm/yy : ";
    cin>>day>>month>>year;
    cout<<"Enter the telephone number : ";
    cin>>teleph;
    Details obj(teleph,day,month,year);
    data[name]=obj;
    cout<<"Do you want to add more Details [y/n] : ";
    cin>>option;
    if(option=='n')
      break;
  }
  return;
}

void printPersonData(map<string ,Details>&data)
{
   Details obj;
    cout<<endl<<"Name"<<setw(20)<<"Date Of Birth"<<setw(25)<<"Telephone Number\n\n";
    for(auto it: data)
    {
      cout<<it.first<<setw(10)<<it.second.date.day<<"/"<<it.second.date.month<<"/"<<it.second.date.year<<setw(20)<<it.second.telephoneNumber<<" "<<endl;
    }
  cout<<endl;
}


void searchtPersonData(map<string ,Details>&data, string name)
{
   Details obj;
    for(auto it: data)
    {
      if(it.first == name)
      {
        cout<<endl<<"Name"<<setw(20)<<"Date Of Birth"<<setw(25)<<"Telephone Number\n\n";
        cout<<it.first<<setw(10)<<it.second.date.day<<"/"<<it.second.date.month<<"/"<<it.second.date.year<<setw(20)<<it.second.telephoneNumber<<" "<<endl;
        return;
      }
      cout<<endl;
     
    }
  cout<<endl<<"Details not found"<<endl;
}

void deletePersonData(map<string ,Details>&data, string name)
{
  data.erase(name);
}

void updateData(map<string ,Details>&data,string name)
{
  long long number;
  map<string ,Details>::iterator itr;
  itr= data.find(name);
  if(itr!=data.end())
  {
    cout<<"Enter the new telephone number of person "<<name<<" : ";
    cin>>number;
    itr->second.telephoneNumber=number;
  }
}

int main() {
map<string ,Details>st;
 int option;
  string name;
  while(1)
    {
      cout<<"\n1 To add details";
      cout<<"\n2 To print data";
      cout<<"\n3 To delete data";
      cout<<"\n4 To update data";
      cout<<"\n5 To search data";
      cout<<"\n6 Exit";
      cout<<"\nEnter your choice:";
      cin>>option;
      switch(option)
        {
          case 1 :
            addDetails(st);
            break;
          case 2:
            printPersonData(st);
            break;
          case 3:
            cout<<"Enter the person of name whose data you want  to delete : ";
            cin>>name;
            deletePersonData(st,name);
            break;
          case 4 :
            cout<<"Enter the person of name whose data you want to to update : ";
            cin>>name;
            updateData(st,name);
            break;
          case 5 :
            cout<<"Enter the person of name whose data you want to search : ";
            cin>>name;
            searchtPersonData(st,name);
            break;
          case 6 :
            exit(0);
        }
    }
return 0;
}

#include <iostream>
using namespace std;
static int count;
inline void counter()
{
  count++;
}
class student {
public:
  int roll;
  string name;
  int Class;
  char div;
  struct dob 
  {
    int dd, mm, yyyy;
  } d;
  string blood_group;
  long number;
  string address;
  void accept();
  void display();
  student() 
  {
    roll = 0;
    name = "--";
    Class = 0;
    div = '-';
    number = 0;
    d.dd = 0;
    d.mm = 0;
    d.yyyy = 0;
    blood_group = '-';
    address = "--";
  }
};
void student::accept() {
  cout << "Enter the roll number:";
  cin >> roll;
  cout << "Enter the Name:";
  cin >> name;
  cout << "Enter the class:";
  cin >> Class;
  cout << "Enter the division: ";
  cin >> div;
  cout << "Enter the Date Of Birth:";
  cin >> d.dd;
  cin>>d.mm ;
  cin>>d.yyyy;
  cout << "Enter the Blood Group:";
  cin >> blood_group;
  cout << "Enter the Number:";
  cin >> number;
  cout << "Enter the Address:";
  cin >> address;
  counter();
}

void student::display()
 {
  cout<<"Name: "<<name<<endl;
  cout<<"Roll: "<<roll<<endl;
  cout<<"Class: "<<Class<<endl;
  cout<<"Div: "<<div<<endl;
  cout<<"Date Of Birth: "<<d.dd<<"/"<<d.mm<<"/"<<d.yyyy<<endl;
  cout<<"Blood group:"<<blood_group<<endl;
  cout<<"Number:"<<number<<endl;
  cout<<"Address:"<<address<<endl; 
 }
int main() 
{
  int n;
  cout<<"Enter the limit: ";
  cin>>n;
  student s[n];
  for(int i=0;i<n;i++)
    {
      s[i].accept();
    }
  for(int i=0;i<n;i++)
    {
      s[i].display();
      cout<<endl;
    }
  cout<<"The number of students are:"<<count;
  return 0;
}

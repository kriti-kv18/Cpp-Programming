#include <iostream>
using namespace std;
class Foodie 
{
public:
  void pizza_person(char pizza[], int n) {
    for (int i = 1; i <= n; i++) {
      cout << "Customer " << i << " likes pizza or not(y/n):";
      cin >> pizza[i];
    }
  }
  void burger_person(char burger[], int n) {
    for (int i = 1; i <= n; i++) {
      cout << "Customer " << i << " likes burger or not(y/n):";
      cin >> burger[i];
    }
  }
  int like_either_all(char pizza[], char burger[], int n, int c1) 
{
    for (int i = 1; i <= n; i++) 
    {
      if (pizza[i] == 'y' || burger[i] == 'y') 
      {
        if (pizza[i] == 'y') 
        {
          cout << "Customer who like pizza is:" << i << endl;
        } 
        else if (burger[i] == 'y') 
        {
          cout << "Customer who like burger is:" << i << endl;
        }
      }
      cout << "Customer who like either pizza or burger or both is:" << i
           << endl;
      c1++;
    }
   return c1;
  }

 
//};
int like_both(char pizza[], char burger[], int n, int c2) {
  for (int i = 1; i <= n; i++) {
    if (pizza[i] == 'y' && burger[i] == 'y') {
      cout << "Customer who like either pizza or burger or both id is:" << i
           << endl;
      c2++;
    }
  }
  return c2;
}
int like_pizza(char pizza[], char burger[], int n, int c3) {
  for (int i = 1; i <= n; i++) {
    if (pizza[i] == 'y' || burger[i] == 'n') {
      cout << "Customer who likes only pizza and not burger id is:" << i
           << endl;
      c3++;
    }
  }
  return c3;
}
int like_burger(char pizza[], char burger[], int n, int c4) {
  for (int i = 1; i <= n; i++) {
    if (burger[i] == 'y' || pizza[i] == 'n') {
      cout << "Customer who likes only burger and not pizza id is:" << i
           << endl;
      c4++;
    }
  }
  return c4;
}
int like_neither(char pizza[], char burger[], int n, int c5) 
{
  for (int i = 1; i <= n; i++) {
    if (burger[i] == 'n' && pizza[i] == 'n') {
      cout << "Customer who likes neither pizza nor burger id is:" << i << endl;
      c5++;
    }
  }
  return c5;
}
}
;
int main() {
  int n, count = 0;
  Foodie f;
  cout << "Enter the number of record you want to store:";
  cin >> n;
  char pizza[n], burger[n];
  f.pizza_person(pizza, n);
  f.burger_person(burger, n);
  cout << "\nDisplaying pizza set: {";
  for (int i = 1; i <= n; i++) {
    cout <<i<<"->"<<pizza[i];
    if(i<n)
      cout<<",";
  }
  cout << "}";
  cout << "\nDisplaying burger set: {";
  for (int i = 1; i <= n; i++) {
    cout <<i<<"->"<<burger[i];
    if(i<n)
      cout<<",";
  }
  cout << "}";
  int c = 1, ch;
  while (c == 1) {
    cout << "\n!!!!!!!MENU!!!!!!!";
    cout << "\n1.Set of customers who like either pizza or burger or both";
    cout << "\n2.Set of customers who like both pizza and burger";
    cout << "\n3.Set of customers who like only pizza, not burger";
    cout << "\n4.Set of customers who like only burger not pizza";
    cout << "\n5.Set of customers who like neither pizza nor burger";
    cout << "\nEnter your choice:";
    cin >> ch;
    switch (ch) {
    case 1:
      int c;
      c = f.like_either_all(pizza, burger, n, count);
      cout << "\nThe number of customers who likes either pizza or burger or "
              "both="
           << c << endl;
      break;
    case 2:
      int c1;
      c1 = f.like_both(pizza, burger, n, count);
      cout << "\nThe number of customers who likes both=" << c1 << endl;
      break;
    case 3:
      int c2;
      c2 = f.like_pizza(pizza, burger, n, count);
      cout << "\nThe number of customers who likes pizza only=" << c2 << endl;
      break;
    case 4:
      int c3;
      c3 = f.like_burger(pizza, burger, n, count);
      cout << "\nThe number of customers who likes burger only=" << c3 << endl;
      break;
    case 5:
      int c4;
      c4 = f.like_neither(pizza, burger, n, count);
      cout << "\nThe number of customers who likes nothing=" << c4 << endl;
      break;
    }
    cout << "\nDo you want to continue:";
    cin >> c;
  }
return 0;
}

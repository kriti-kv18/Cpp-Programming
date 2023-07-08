#include <iostream>
using namespace std;
class Complex {
private:
  int real, img;

public:
  Complex() {
    real = 0;
    img = 0;
  }
  void operator+(Complex c) {
    Complex c1;
    c1.real = real + c.real;
    c1.img = img + c.img;
    cout<<"The number is:"<<c1.real<<"+"<<c1.img<<"i"<<endl;
  }
  void operator*(Complex c) {
    Complex c3;
    int rr=real*c.real;
    int ii=img*c.img;
    int ri=real*c.img;
    int ir=img*c.real; 
    c3.real=(rr-ii);
    c3.img=(ir+ri);
    cout << "The Number is :" <<c3.real << "+"<<c3.img << "i" << endl;
  }
  void operator>>(Complex &c) {
    cout<<"Enter the first number:";
    cin>>real>>img;
    cout<<"Enter the Second number:";
    cin>>c.real>>c.img;
  }
  void operator<<(Complex &c) {
    cout<<"The First Number is:"<<real<<"+"<<img<<"i"<<endl;
     cout<<"The Second Number is:"<<c.real<<"+"<<c.img<<"i";
  }
};
int main() {
  Complex  c1, c2;
  int choice = 1, ch;
  while (choice == 1) {
    cout << "\n!!!!!MENU!!!!!";
    cout << "\n1.ACCEPT THE REAL AND IMAGINARY NUMBERS";
    cout << "\n2.PRINTING THE COMPLEX NUMBER";
    cout << "\n3.ADDITION OF TWO NUMBERS";
    cout << "\n4.MULTIPLICATION OF TWO NUMBERS";
    cout << "\nEnter your choice:";
    cin >> ch;
    switch (ch) {
    case 1:
      c1>> c2;
      break;
    case 2:
      c1 << c2; 
      break;
    case 3:
      c1+c2;
      break;
    case 4:
      c1 * c2;
    }
    cout << "\nWant to continue:";
    cin >> choice;
  }
}

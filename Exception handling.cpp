#include <iostream>
using namespace std;
class Matrix {
  int a[10][10], b[10][10], sum[10][10], r, r1, c, c1;

public:
  void get_data();
  void display();
  void add();
  void sub();
  void multi();
  Matrix() {
    for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 10; j++) {
        a[i][j] = 0;
        b[i][j] = 0;
        sum[i][j] = 0;
      }
    }
  }
};
void Matrix::get_data() {
  cout << "Enter the rows:";
  cin >> r;
  cout << "Enter the column:";
  cin >> c;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cout << "Enter the"
           << "[" << i << "]"
           << "[" << j << "]"
           << " element:";
      cin >> a[i][j];
    }
  }
  cout << "Enter the rows:";
  cin >> r1;
  cout << "Enter the column:";
  cin >> c1;
  for (int i = 0; i < r1; i++) {
    for (int j = 0; j < c1; j++) {
      cout << "Enter the"
           << "[" << i << "]"
           << "[" << j << "]"
           << " element:";
      cin >> b[i][j];
    }
  }
}
void Matrix::display() {
  cout << "MATRIX 1\n";
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cout << a[i][j] << "  ";
    }
    cout << endl;
  }
  cout << "MATRIX 2\n";
  for (int i = 0; i < r1; i++) {
    for (int j = 0; j < c1; j++) {
      cout << b[i][j] << "  ";
    }
    cout << endl;
  }
}
void Matrix::add() {
  try {
    if (!(r == r1 && c == c1))
      throw r;
    else {
      for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
          sum[i][j] = a[i][j] + b[i][j];
        }
      }
      for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
          cout << sum[i][j] << "  ";
        }
        cout << endl;
      }
    }
  } catch (...) {
    cout << "Exception Occured!!!!!";
    cout << "\nRow and Column must be equal\n";
  }
}
void Matrix::sub() {
  try {
    if (!(r == r1 && c == c1))
      throw r;
    else {
      for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
          sum[i][j] = a[i][j] - b[i][j];
        }
      }
      for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
          cout << sum[i][j] << "  ";
        }
        cout << endl;
      }
    }
  }
    catch(...)
    {
      cout << "Exception Occured!!!!!";
      cout << "\nRow and Column of bothe the matrix must be equal\n";
    }
}
void Matrix::multi() {
  int counter = 0;
  try
    {
      if(!(r==c1))
        throw r;
      else
      {
        for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      for (int k = 0; k < c; k++) {
        counter += a[i][k] * b[k][j];
      }
      sum[i][j] = counter;
      counter = 0;
    }
  }
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cout << sum[i][j] << "  ";
      }
    cout << endl;
    }
  }
}
    catch(...)
    {
      cout << "Exception Occured!!!!!";
      cout << "\nRow of firts matrx and Column of second matrix must be equal\n";
    }
  
}
int main() {
  Matrix m;
  int c = 1, ch;
  while (c == 1) {
    cout << "\n!!!!!!!MENU!!!!!!!!";
    cout << "\n1.CREATING THE MATRIX";
    cout << "\n2.ADDITION OF TWO MATRIX";
    cout << "\n3.SUBTRACTION OF TWO MATRIX";
    cout << "\n4.MULTIPLICATION OF TWO MATRIX";
    cout << "\nEnter your choice:";
    cin >> ch;
    switch (ch) {
    case 1:
      m.get_data();
      m.display();
      break;
    case 2:
      m.add();
      break;
    case 3:
      m.sub();
      break;
    case 4:
      m.multi();
      break;
    default:
      cout << "\nWRONG CHOICE!!!!!!";
    }
    cout << "\nDo you want to continue:";
    cin >> c;
  }
return 0;
}

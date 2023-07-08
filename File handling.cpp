#include <fstream>
#include <iostream>
#include <string>
using namespace std;
class employee {
  int id, salary, age;
  string name, post, dept;

public:
  void getdata() {
    cout << "Enter employee id:";
    cin >> id;
    cout << "Enter the name of employee:";
    cin >> name;
    cout << "Enter employee age:";
    cin >> age;
    cout << "Enter employee salary:";
    cin >> salary;
    cout << "enter post of employee:";
    cin >> post;
    cout << "enter department of employee:";
    cin >> dept;
  }
  void add_record() {
    ofstream file("sample.txt", ios ::app | ios ::binary);
    employee obj;
    obj.getdata();
    file.write((char *)&obj, sizeof(obj));
    file.close();
  }
  void display() {
    ifstream file;
    file.open("sample.txt", ios::in | ios::binary);
    employee obj;
    while (file.read((char *)&obj, sizeof(obj))) {
      cout << "Id is : " << obj.id << endl;
      cout << "Name is : " << obj.name << endl;
      cout << "Age is : " << obj.age << endl;
      cout << "Salary is : " << obj.salary << endl;
      cout << "Department is : " << obj.dept << endl;
      cout << "Post is : " << obj.post << endl;
    }
    file.close();
  }

  void update() {
    int pos, flag = 0, k;
    cout << "enter id to modify: ";
    cin >> k;
    fstream fs;
    fs.open("sample.txt", ios::in | ios::binary | ios::out);
    while (!fs.eof()) {
      pos = fs.tellg();
      fs.read((char *)this, sizeof(employee));
      if (fs) {
        if (k == id) {
          flag = 1;
          cout << "enter new data\n";
          getdata();
          fs.seekp(pos);
          fs.write((char *)this, sizeof(employee));
          break;
        }
      }
    }
    fs.close();
    if (flag == 1)
      cout << "\nrecord updated \n";
    else
      cout << "\nrecord not found \n";
  }
  void search() {
    ifstream file("sample.txt", ios::in | ios::binary);
    employee obj;
    int i;
    cout << "eneter id to search: ";
    cin >> i;
    int flag = -1;
    while (file.read((char *)&obj, sizeof(obj))) {
      if (obj.id == i) {
        flag = 1;
        break;
      }
    }
    if (flag == -1) {
      cout << "record not found\n";
    } else {
      cout << "Id is : " << obj.id << endl;
      cout << "Name is : " << obj.name << endl;
      cout << "Department is : " << obj.dept << endl;
      cout << "Post is : " << obj.post << endl;
    }
  }
};
int main() {
  int ch;
  employee e1;
  do {
    cout << "\n!!!!!!MENU!!!!!!";
    cout << "\n1.ADD DETAILS";
    cout << "\n2.DISPLAY DETAILS";
    cout << "\n3.SEARCH RECORD";
    cout << "\n4.UPDATE RECORD";
    cout << "\nEnter your choice:";
    cin >> ch;
    switch (ch) {
    case 1:
      e1.add_record();
      break;
    case 2:
      e1.display();
      break;
    case 3:
      e1.search();
      break;
    case 4:
      e1.update();
      break;
    }
  } while (ch != 5);
  return 0;
}

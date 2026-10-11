#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;

public:
    Person(string n) : name(n) {
        cout << "Person constructor called\n";
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
    }
};

class Student : virtual public Person {
protected:
    int rollNo;

public:
    Student(string n, int r)
        : Person(n), rollNo(r) {
        cout << "Student constructor called\n";
    }

    void displayStudent() {
        cout << "Roll Number: " << rollNo << endl;
    }
};

class Employee : virtual public Person {
protected:
    int empId;

public:
    Employee(string n, int e)
        : Person(n), empId(e) {
        cout << "Employee constructor called\n";
    }

    void displayEmployee() {
        cout << "Employee ID: " << empId << endl;
    }
};

class TA : public Student, public Employee {
public:
    TA(string n, int r, int e)
        : Person(n), Student(n, r), Employee(n, e) {}

    void display() {
        displayPerson();
        displayStudent();
        displayEmployee();
    }
};

int main() {
    TA ta("Ananya", 25, 501);

    cout << "\nTeaching Assistant Details:\n";
    ta.display();

    return 0;
}
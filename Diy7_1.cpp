#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    int id;

public:
    Employee(string n, int i) : name(n), id(i) {}

    virtual void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
};

class Manager : public Employee {
    int teamSize;

public:
    Manager(string n, int i, int t)
        : Employee(n, i), teamSize(t) {}

    void display() override {
        Employee::display();
        cout << "Team Size: " << teamSize << endl;
    }
};

class Engineer : public Employee {
    string skill;

public:
    Engineer(string n, int i, string s)
        : Employee(n, i), skill(s) {}

    void display() override {
        Employee::display();
        cout << "Skill: " << skill << endl;
    }
};

int main() {
    Employee e("Rahul", 101);
    Manager m("Priya", 102, 8);
    Engineer eng("Arun", 103, "C++");

    cout << "Employee Details:\n";
    e.display();

    cout << "\nManager Details:\n";
    m.display();

    cout << "\nEngineer Details:\n";
    eng.display();

    return 0;
}
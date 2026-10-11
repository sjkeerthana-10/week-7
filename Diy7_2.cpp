#include <iostream>
using namespace std;

class Shape {
protected:
    string type;

public:
    Shape(string t) : type(t) {
        cout << "Shape constructor called\n";
    }

    void displayShape() {
        cout << "Type: " << type << endl;
    }
};

class Polygon : public Shape {
protected:
    int sides;

public:
    Polygon(string t, int s) : Shape(t), sides(s) {
        cout << "Polygon constructor called\n";
    }

    void displayPolygon() {
        displayShape();
        cout << "Number of sides: " << sides << endl;
    }
};

class Rectangle : public Polygon {
private:
    int length, width;

public:
    Rectangle(int l, int w)
        : Polygon("Rectangle", 4), length(l), width(w) {
        cout << "Rectangle constructor called\n";
    }

    void display() {
        displayPolygon();
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << length * width << endl;
    }
};

int main() {
    Rectangle r(10, 5);

    cout << "\nRectangle Details:\n";
    r.display();

    return 0;
}
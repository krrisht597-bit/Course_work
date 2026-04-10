#include <iostream>
using namespace std;

class Area {
public:
    virtual void area() {
        cout << "\nParent class method called.";
    }
};

class Rect : public Area {
public:
    int l, b;

    void area() {
        cout << "\nEnter l and b: ";
        cin >> l >> b;
        cout << "Area of rectangle = " << (l * b);
    }
};

class Circle : public Area {
public:
    int r;

    void area() {
        cout << "\nEnter the radius: ";
        cin >> r;
        cout << "Area of circle = " << (3.14 * r * r);
    }
};
  
int main() {    
    Rect r1;
    r1.area();

    Circle c1;
    c1.area();

    return 0;
}



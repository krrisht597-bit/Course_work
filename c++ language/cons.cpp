#include <iostream> 
using namespace std;
class maths {
public:
    int x, y;

    // Default constructor
    maths() {
        cout << "\nSimple constructor called";
        x = 0;
        y = 0;
    }

    // Parameterized constructor
    maths(int a, int b) {
        x = a;
        y = b;       
    }

    // Copy constructor
    maths(const maths &m2) {
        x = m2.x;
        y = m2.y;
    }
    void display() {
        cout << "\nx = " << x << "\t y = " << y;
    }
};
int main() {
    maths m1;
    maths m2(12, 45);
    m2.display();
    maths m3 = m2;   
    m3.display();
    return 0;
}


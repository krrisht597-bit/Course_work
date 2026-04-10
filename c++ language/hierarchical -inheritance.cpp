#include <iostream>
using namespace std;

class area {
    public:
        int l, b;
        void getdata() {
            cout << "\nEnter length and breadth: ";
            cin >> l >> b;
        }
};

class rect : public area {
    public:
        void area_of_rect() {
            cout << "\nArea of rectangle = " << l * b;
        }
};

class square : public area {
    public:
        void area_of_square() {
            cout << "\nArea of square = " << l * l;
        }
};

int main() {
    rect r1;
    r1.getdata();
    r1.area_of_rect();

    square s1;
    s1.getdata();
    s1.area_of_square();

    
}


#include <iostream>
using namespace std;

class parent {
    public:
        int l, b;
        void getdata() {
            cout << "\nEnter length and breadth: ";
            cin >> l >> b;
        }
};

class area : public parent {
    public:
        void area_of_rect() {
            cout << "\nArea of rectangle = " << l * b;
        }

        void area_of_square() {
            cout << "\nArea of square = " << l * l;
        }
};

 main() {
    area a1;

    a1.getdata();        // Get length & breadth
    a1.area_of_square(); // Compute square area
    a1.area_of_rect();   // Compute rectangle area

}


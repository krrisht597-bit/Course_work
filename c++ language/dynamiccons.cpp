#include <iostream>
using namespace std;
class maths {
public:
    int a, b, c, d;
    // Constructor 1
    maths(int x, int y, int m, int n) {
        a = x;
        b = y;
        c = m;
        d = n;
    }
    // Constructor 2 
    maths(int r, int m) {
        a = r;
        b = m;
        c = 0;
        d = 0;
    }
};
int main() {
    maths m1(1, 2, 45, 45);
    maths* m2 = new maths(100, 300);
    cout << "\nSize of m1 = " << sizeof(m1);
    cout << "\nSize of m2  = " << sizeof(m2);
}


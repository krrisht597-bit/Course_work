#include <iostream>
using namespace std;
class maths {
public:
    static int counter;
    maths(){
        counter++;
}
    static void objcount_print() {
        cout << "Total objects = " << counter << endl;
    }
};
// Static member definition
int maths::counter = 0;
int main() {
    maths m1, m2, m3;
    maths::objcount_print();
    return 0;
}


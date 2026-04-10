#include <iostream>
using namespace std;

class A {
public:
    int a;
    void getdataA() {
        cout << "\nEnter value of a: ";
        cin >> a;
    }
};

class B {
public:
    int b;
    void getdataB() {
        cout << "\nEnter value of b: ";
        cin >> b;
    }
};

class C : public A, public B {
public:
    int c;
    void getdataC() {
        cout << "\nEnter value of c: ";
        cin >> c;
    }

    void add() {
        cout << "\nAddition = " << a + b + c;
    }
};

 main() {
    C c1;
    c1.getdataA();
    c1.getdataB();
    c1.getdataC();
    c1.add();

   
}


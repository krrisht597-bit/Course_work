#include <iostream>
using namespace std;

class A {
public:
    int a;
    void getA() {
        cout << "\nEnter value of a: ";
        cin >> a;
    }
};

class B : virtual public A {
public:
    int b;
    void getB() {
        cout << "\nEnter value of b: ";
        cin >> b;
    }
};

class C : virtual public A {
public:
    int c;
    void getC() {
        cout << "\nEnter value of c: ";
        cin >> c;
    }
};

class D : public B, public C {
public:
    int d;
    void getD() {
        cout << "\nEnter value of d: ";
        cin >> d;
    }

    void add() {
        cout << "\nAddition = " << a + b + c + d;
    }
};

int main() {
    D c1;

    c1.getA();  
    c1.getB();  
    c1.getC();  
    c1.getD();  
    c1.add();

}


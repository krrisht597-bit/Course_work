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

class B : public A {
public:
    int b;
    void getB() {
        cout << "\nEnter value of b: ";
        cin >> b;
    }
};

class C : public B {
public:
    int c;
    void getC() {
        cout << "\nEnter value of c: ";
        cin >> c;
    }


    void add() {
        cout << "\nAddition = " << a + b + c;
    }
};

int main() {
    C c1;
    c1.getA();
    c1.getB();
    c1.getC();
    c1.add();

   
}


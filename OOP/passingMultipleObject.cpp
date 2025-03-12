#include <iostream>
using namespace std;

class Parent {
public:
    Parent() {
        cout << "Parent Constructor" << endl;
    }

    void info() {
        cout << "Parent class info" << endl;
    }
};

class Child : public Parent {
public:
    Child() {
        cout << "Child Constructor" << endl;
    }

    void info() {
        cout << "Child class info" << endl;
    }
};

class Example {
public:
    Example(Parent obj1, Child obj2) {  // Constructor taking two objects
        cout << "Example Constructor" << endl;
        
        cout << "Calling info() from obj1:" << endl;
        obj1.info();  // Calls method on Parent object

        cout << "Calling info() from obj2:" << endl;
        obj2.info();  // Calls method on Child object
    }
};

int main() {
    Parent obj1;   // Creating Parent object
    Child obj2;    // Creating Child object

    Example obj3(obj1, obj2);  // Passing two objects to Example constructor
    return 0;
}

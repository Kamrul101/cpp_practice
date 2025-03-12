#include <iostream>
using namespace std;

class Parent {
public:
    virtual void info() {  // Use 'virtual' for method overriding
        cout << "Parent class info" << endl;
    }
};

class Child : public Parent {
public:
    void info() override {  // Override the method
        cout << "Child class info" << endl;
    }
};

int main() {
    Parent* obj = new Child();  // Upcasting: Parent pointer to Child object
    obj->info();  // Calls Child's overridden method (dynamic dispatch)

    delete obj;  // Clean up memory
    return 0;
}

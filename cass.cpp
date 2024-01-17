#include<iostream>

class Rectangle{
    public:
        int length, breadth;
        int area(){
            return length * breadth;
        }
        int perimeter(){
            return 2* (length+breadth);
        }
};
int main(){
    Rectangle r1;
    r1.length=20;
    r1.breadth=14;
    std::cout<<r1.area();
    return 0;
}
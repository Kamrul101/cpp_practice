#include<iostream>

class Demo{
    int *p;
    public:
        Demo(){
            p = new int[10];
            std::cout<<"Constructor demo"<<std::endl;
        }
        ~Demo(){
            delete []p;
            std::cout<<"Destructor demo"<<std::endl;

        }
};

void fun(){
    Demo *d =  new Demo();
    delete d;
}
int main(){
    fun();
}
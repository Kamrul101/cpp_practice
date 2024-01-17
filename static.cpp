#include<iostream>
void fun(){
    static int v= 0;
    int a=5;
    v++;
    std::cout<<a<<" "<<v<<std::endl;
}
int main(){
    fun();
    fun();
    fun();
}
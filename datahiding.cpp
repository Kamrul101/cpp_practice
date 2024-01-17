#include<iostream>
using namespace std;

class Rectangle{
    private:
        int length, breadth;
    public:
        void setLength(int l){
            if(l>=0){
                length = l;
            }
            else length = 0;
        }
        void setBreadth(int b){
            if(b>= 0){
                breadth =b;
            }
            else breadth = 0;
        }

        int getLength(){
            return length;
        }
        int getBreadth(){
            return breadth;
        }
        int area(){
            return length * breadth;
        }
};
int main(){
    Rectangle r;
    int l1,b1;
    cin>>l1>>b1;
    cout<<endl;
    r.setLength(l1);
    r.setBreadth(b1);
    cout<<r.area();
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
// const int mx =2e5+123;
// int a[mx];

class Student{
    private:
    public:
        string name, sub, dept;
        //normal parameterized constructor
        Student(string name,string sub,string dept){
            this->name = name;
            this->sub = sub;
            this->dept=dept;
        }
        /*
            copy constructor
            pass by reference of the original
            so this is the main copy of original object
        */
        Student(Student &obj){
            cout<<"It's a copy constructor"<<endl;
            this->name = obj.name;
            this->sub = obj.sub;
            this->dept = obj.dept;
        }
        void getInfo(){
            cout<<"Student name: "<<name<<endl;
            cout<<"Student sub: "<<sub<<endl;
            cout<<"Student dept: "<<dept<<endl;
        }
};

int main() {
    optimize();
    Student t1("Kamrul","C++","ICE");
    t1.getInfo();
    Student t2(t1);
    t2.getInfo();
    
}
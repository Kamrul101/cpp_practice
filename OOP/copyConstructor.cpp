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
        string name, sub, dept;
    public:
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
            // cout<<"It's a copy constructor"<<endl;
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
class Student1{
    private:
    public:
        string name;
        double* cgpaPtr;
        //normal parameterized constructor
        Student1(string name, double cgpa){
            this->name = name;
            cgpaPtr = new double;
            *cgpaPtr = cgpa;
        }
        /*
            deep copy constructor
            pass by reference of the original
            so this is the main copy of original object
            Student1(Student1 &obj){
                this->name = obj.name;
                this->cgpaPtr = obj.cgpaPtr;

                here copy and original points on the same memory
                so any change affects both the object
            }
        */
        Student1(Student1 &obj){
            this->name = obj.name;
            cgpaPtr = new double;
            *cgpaPtr = *obj.cgpaPtr;
        }
        void getInfo(){
            cout<<"Student name: "<<name<<endl;
            cout<<"Student cgpa: "<<*cgpaPtr<<endl;
        }
};

int main() {
    optimize();
    Student t1("Kamrul","C++","ICE");
    // t1.getInfo();
    Student t2(t1);
    // t2.getInfo();
    Student1 t3("Kamrul",3.9);
    t3.getInfo();
    Student1 t4(t3);
    *t4.cgpaPtr=3.2;
    t3.getInfo();
    t4.getInfo();
}
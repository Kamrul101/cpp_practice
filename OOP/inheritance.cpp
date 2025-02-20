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

//Parent class
class Person{
    protected:
        string name;
        int age;
    public:
        
        Person(string name,int age){
            cout<<"Main Class"<<endl;
            this->name = name;
            this->age = age;
        }

        void getInfo(){
            
            cout<<"Person name: "<<name<<endl;
            cout<<"Student age: "<<age<<endl;
        }
};
//Child class

class Student: public Person{
    private:
        int roll;
    public:
        Student(string name, int age,int roll): Person(name,age){
            cout<<"Inherited Class"<<endl;
            this->roll = roll;
        }
        void getInfo(){
            cout<<"Person name: "<<name<<endl;
            cout<<"Student age: "<<age<<endl;
            cout<<"Student roll: "<<roll<<endl;
        }
};
int main() {
    optimize();
    Student s1("Kamrul",27,123);
    s1.getInfo();
    
}
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
        Student(string name,string sub,string dept){
            this->name = name;
            this->sub = sub;
            this->dept=dept;
        }
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
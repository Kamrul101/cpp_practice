#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
class Complex {
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0){
        real = r;
        imag = i;
    }

    // This is automatically called when '+' is used with
    // between two Complex objects
    Complex operator+(Complex obj){
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    Complex add(Complex obj){
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void print(){
        cout<<real<<" + i"<<imag<<endl;
    }
};

int main()
{
    Complex c1(10,5),c2(2,4);
    //for operator keyword
    Complex c4 = c1 + c2;
    c4.print();
    //without operator keyword
    Complex c3 = c1.add(c2);  
    c3.print();
}

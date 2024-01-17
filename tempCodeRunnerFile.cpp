#include <iostream>
#include<iomanip>
using namespace std;
 
int main() {
 
   long double a,b,c;
    cin>>a>>b>>c;
    float average = (a+b+c)/3;
    cout<<"MEDIA = "<<fixed<<setprecision(2)<<average<<endl;
    return 0;
}
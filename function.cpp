#include <iostream>
#include<iomanip>
using namespace std;
 
int main() {
 
   long double a,b,c;
    cin>>a>>b>>c;
    float average = ((a*2)+(b*3)+(c*5))/10;
    cout<<"MEDIA = "<<fixed<<setprecision(1)<<average<<endl;
    return 0;
}
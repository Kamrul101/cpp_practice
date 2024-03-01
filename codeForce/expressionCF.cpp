#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main() {
    optimize();
    int a,b,c;
    cin>>a>>b>>c;
    int s1,s2,s3,s4,s5;
    s1 = a + b*c;
    s2 = a* (b+c);
    s3 = a * b * c;
    s4 = (a+b) * c;
    s5 = a + b + c;
    int s = max(max(s2,s3),max(s4,s5));
    cout<<max(s,s1)<<"\n";
 
}
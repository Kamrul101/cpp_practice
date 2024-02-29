#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main() {
    optimize();
    int a,b,c;
    cin>>a>>b>>c;
    int s1,s2,s3,s4;
    s1 = a + b*c;
    s2 = a* (b+c);
    s3 = a * b * c;
    s4 = (a+b) * c;
    if(s1>s2 && s1>s2 && s1 > s3 && s1> s4 ){
        cout<<s1<<endl;
    }
    else if(s2>s3 && s2>s4){
        cout<<s2<<endl;
    }
    else if(s3>s4) cout<<s3<<endl;
    else cout<<s4<<endl;
 
}
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main() {
    optimize();
    string s,r;
    char temp;
    cin>>s;
    temp = s[0];
    for(auto u: s){
        int t = u - '0';
        //this also works same
        // int rev = 9 - t;
        // if(rev < t){
        //     r += rev + '0';
        // }
        // else r+= t + '0';
        if(t>4){
            int rev = 9 - t;
            r+=rev + '0';
        }
        else r+= t + '0';
        
    }
    if(r[0] == '0') r[0]= temp;
    cout<<r<<endl;
    
}
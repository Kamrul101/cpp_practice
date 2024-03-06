#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main() {
    optimize();
    string s;
    cin>>s;
    
    for(int i=1;i<s.length();i++){
        if(s[i]>91) {
            cout<<s<<endl;
            return 0;
        }
    }
    if(s[0]>91) s[0]-=32;
    else s[0]+=32;
    for(int i=1;i<s.length();i++){
        s[i]+=32;
        // cout<<s[i]<<endl;
    }
    cout<<s<<endl;
}
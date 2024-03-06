#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    optimize();
    string s;
    cin>>s;
    for(int i=2;i<s.length();i++){
        
        if(s[i-2] =='W' && s[i-1]=='U' && s[i-0]=='B'){
            s[i-2] =' '; s[i-1]=' ';  s[i-0]=' ';
        }
    }
    cout<<s<<endl;

}
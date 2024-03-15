#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e6+123;
// long long a[mx];

int main() {
    optimize();
    
    string s;
    cin>>s;
    string temp;
    for(int i=0;i<s.size();i++){
        if(s[i]=='.'){
            temp+='0';
        }
        if(s[i]=='-' && s[i+1]=='.'){
            temp+='1';
            i++;
        }
        if(s[i]=='-' && s[i+1]=='-') {
            temp+='2';
            i++;
        }
    }
    cout<<temp<<endl;
}
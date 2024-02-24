#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    int t;
    cin>>t;
    while(t--){
    string s;
        cin>>s;
        if(s.length()<=10){
            cout<<s<<"\n";
        }
        else cout<<s[0]<<s.length()-2<<s[s.length()-1]<<"\n";
        
    }  
}
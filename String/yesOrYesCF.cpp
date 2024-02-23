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
        transform(s.begin(),s.end(),s.begin(),::tolower);
        if(s == "yes"){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }  
}
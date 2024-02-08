#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    
    string s1,s2;
    cin>>s1>>s2;

    reverse(s1.begin(),s1.end());

    if(s1 == s2){
        cout<<"YES\n";
    }
    else cout<<"NO\n";
    
    
    
}
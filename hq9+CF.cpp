#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    string s;
    cin>>s;
    bool a = false;
    for(auto u: s){
        if(u=='H' || u=='Q' || u == '9'){
            a = true;
        }
        
    }
    if(a == true){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}
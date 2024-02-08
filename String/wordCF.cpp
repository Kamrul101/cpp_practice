#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    string s;
    int upCase = 0;
    int lcase = 0;
    cin>>s;
    for(auto u:s){
        if(u>=65 && u<=90){
            upCase++;
        }
        else{
            lcase++;
        }
    }
    if(upCase<=lcase){
        transform(s.begin(),s.end(),s.begin(),::tolower);
        
    }
    else{
        transform(s.begin(),s.end(),s.begin(),::toupper);
    }
    cout<<s<<'\n';
    
    
}
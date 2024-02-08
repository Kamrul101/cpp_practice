#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    int n;
    cin>>n;
    string s;
    int antonCount = 0;
    int danikCount = 0;
    cin>>s;
    for(auto u:s){
        if(u==65){
            antonCount++;
        }
        else{
            danikCount++;
        }
    }
    
    if(antonCount>danikCount){
        cout<<"Anton\n";
    }
    else if(antonCount<danikCount){
        cout<<"Danik\n";
    }
    else{
        cout<<"Friendship\n";
    }
    
    
}
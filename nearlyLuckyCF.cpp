#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    
    string s;
    cin>>s;
    int i=0,count = 0;
   for(auto u: s){

        if(u=='4' || u == '7'){
            count++;
        }
        
    }
    if(count == 4 || count == 7){
        cout<<"YES\n";
    }
    else {cout<<"NO\n";}
    
    
    
}
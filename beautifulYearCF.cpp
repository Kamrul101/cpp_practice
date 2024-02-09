#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    int y;
    string z;
    cin>>y;
    
    while(y++){
    
    z = to_string(y);
    int yz = z.size();
    sort(z.begin(), z.end());
    int sz = unique(z.begin(),z.end())-z.begin();
    if(yz==sz){
        
        cout<<y <<endl;
        break;
        
    }
    }
    
}
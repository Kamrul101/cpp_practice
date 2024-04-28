#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"




int main() {
    optimize();
    int t,n;
    cin>>t>>n;
        vector<char> v;
        bool ans= true;
   
        for(int i=0;i<t*n;i++){
            char m;
            cin>>m;
            v.push_back(m);
            
        }  
    
        for(int i=0;i<t*n;i++){
            if(v[i]=='C'|| v[i]=='M' || v[i]=='Y'){
                cout<<"#Color"<<endl;
                ans=false;
                break;
            }
            
        }
    
    if(ans) cout<<"#Black&White"<<endl;
}

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main() {
    optimize();
    
    while(1){
        int m ,n;
        cin>>m>>n;
        if(m==0 && n==0) break;
        // for(int i=0;i<n;i++) cout<<'#';
        // cout<<'\n';
        for(int i= 0;i<m;i++){
            
            for(int j=0;j<n;j++){
                if((i+ j )%2==0 )cout<<'#';
                else cout<<'.';
            }
            cout<<"\n";
            
        }
        
        cout<<"\n";
    }
}
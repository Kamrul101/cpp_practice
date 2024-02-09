#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    int t;
    cin>>t;
    int p,q,newTotal=0, rem=0,max=0;
    
    int i;
    for(i=0; i<t;i++){
        cin>>p>>q;
        rem = q-p;
        
        if(rem > 1){
            newTotal++;
        }
        
    }
    cout<<newTotal<<endl;
    
    
    
}
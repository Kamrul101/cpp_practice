#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    int t;
    cin>>t;
    int enter,exit,newTotal=0, rem=0,max=0;
    
    int i;
    for(i=0; i<t;i++){
        cin>>exit>>enter;
        rem = enter - exit;
        newTotal += rem;
        if(newTotal>max){
            max = newTotal;
        }
        
    }
    cout<<max<<endl;
    
    
    
}
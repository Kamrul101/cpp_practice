#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    long long t;
    cin>>t;
    if(t%2==0){
        cout<<t/2<<'\n';
    }
    else{
        cout<<( t/2 - t)<<'\n';
    }
    
    
}
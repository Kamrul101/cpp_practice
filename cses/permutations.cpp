#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int mx[1230],my[1230];

int main() {
    optimize();
    int n;
    cin>>n;
    if(n==1) cout<<"1\n";
    else if(n==2 || n==3) cout<<"NO SOLUTION\n";
    else{
        
        for(int i=2; i<=n;i+=2) cout<<i<<" ";
        
        for(int i=1; i<=n;i+=2) cout<<i<<" ";
        
    }
    
}
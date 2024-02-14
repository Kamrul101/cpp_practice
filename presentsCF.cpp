#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    optimize();
    int n;
    cin>>n;
    int a[n];
    int b[n];
    // for(int i=1;i<=n;i++){
        
    //     cin>>a[i];
    //     // b[a[i]] = i; same thing is done in the second for loop
    // }
    
    // for(int i=1;i<=n;i++){
    //     b[a[i]] = i;
    // }
    // for(int i=1;i<=n;i++){
    //     cout<<b[i]<<" ";
    // }
    for(int i=0;i<n;i++){
        
        cin>>a[i];
        
    }
    
    for(int i=0;i<n;i++){
        b[a[i]-1] = i+1;
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
}
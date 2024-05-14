#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
typedef long long ll ;
// const int mx = 2e5+123;
// long long a[mx];

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n==k) for(int i=1;i<=n;i++) cout<<1<<" ";
        else if(k==1) for(int i=0;i<n;i++) cout<<i+1<<" ";
        else cout<<-1;
        cout<<endl;
        
    }
    
    
}
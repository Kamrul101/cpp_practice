#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
const int mx = 2e5+123;
long long a[mx];

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        int ans=a[0];
        for(int i=1;i<n;i++) ans&=a[i];
        cout<<ans<<endl;
    }
    
    
}
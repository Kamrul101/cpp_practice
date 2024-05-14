#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
typedef long long ll ;
const int mx = 2e5+123;
long long a[mx];

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        bool ans = false;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==k) ans = true;

        }
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    
    
}
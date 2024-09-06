#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
// const int mx =2e5+123;
// int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       vector<int> v(n);
       for(int i=0;i<n;i++) cin>>v[i];
       bool ans = false;
       for(int i=0;i<n-2;i++){
            if(v[i]==0) continue;
            else if(v[i]<0){
                ans = true;
                cout<<"NO"<<endl;
                break;
            }
            else{
                v[i+1] -=2*v[i];
                v[i+2] -=v[i];
                v[i]-=v[i];
            }
       }
       if(!ans){
            if(v[n-2]==0 && v[n-1]==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
       }
        
    }
    
}
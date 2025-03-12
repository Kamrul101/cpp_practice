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
        ll n,k;
        cin>>n>>k;
        ll ans = 0;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            for(int i=0;i<31;i++){
                if(x&1)mp[i]++;
                x=(x>>1);
            }
        }
        for(int i=30;i>=0;i--){
            int y = n-mp[i];
            if(k>=y){
                ans+=pow(2,i);
                k-=y;
            }
        }
        cout<<ans<<endl;
    }
    
}
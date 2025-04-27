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
        vector<ll> v1(n+1),v2(n+1);
        for(ll i=0;i<n;i++) cin>>v1[i];
        bool check = false, ans = true;
        ll cnt=0;
        ll x = 0;
        for(ll i=0;i<n;i++){
            cin>>v2[i];
            if(v2[i]!=-1 && !check){
                x = v1[i] + v2[i];
                check = true;
            }
            if(v2[i]!=-1 && check){
                if((v1[i]+v2[i])!=x){
                    ans = false;
                }
            }
            if(v2[i]==-1) cnt++;
        }
        if(!ans ) cout<<0<<endl;
        else{
            check = true;
            if(cnt==n){
                ll mn = INT_MAX, mx = INT_MIN;
                    for(ll i=0;i<n;i++){
                        mx = max(v1[i],mx);
                        mn = min(mn,v1[i]+k);
                    }
                    x = (mn-mx)+1;
                    cout<<max(0LL,x)<<endl;
            }
            else{
                for(ll i=0;i<n;i++){
                    if((x-v1[i])>=0 && (x-v1[i])<=k ){
                        continue;
                    }
                    else{
                        cout<<0<<endl;
                        check = false;
                        break;
                    }
                }
                if(check) cout<<1<<endl;
            }


        }
        
        
    }
    
}
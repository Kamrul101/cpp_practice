#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
ll a[mx];
int main() {
    optimize();

    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    deque<ll> dq;
    map<ll,ll>mp;
    int mx = 0; 
    for(int i=0;i<n;i++){
        if(mp[a[i]]==1){
            while(1){
                ll x = dq.front();
                dq.pop_front();
                mp[x]=0;
                if(x == a[i]) break;
            }
        }
        dq.push_back(a[i]);
        mp[a[i]] = 1;
        int n = dq.size();
        mx = max(mx,n);
    }
    cout<<mx<<endl;

    
}
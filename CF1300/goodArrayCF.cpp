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
    int n;
    cin>>n;
    vector<pair<ll,int>>vp(n);
    ll sum = 0;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        sum+=x;
        vp[i].first = x;
        vp[i].second = i;
    }

    sort(vp.begin(),vp.end());
    vector<int> ans;
    for(int i=0;i<n;i++){
        ll val = vp[i].first;
        ll idx = vp[i].second;
        ll check;
        if(i==n-1){
            check = sum-(val+vp[n-2].first);
            if(check==vp[n-2].first){
                ans.push_back(idx+1);
            }
            continue;
        }
        check = sum-(val+vp[n-1].first);
        if(check==vp[n-1].first){
            ans.push_back(idx+1);
        }
    }
    if(ans.size()==0)cout<<ans.size()<<endl;
    else{
        cout<<ans.size()<<endl;
        for(auto u:ans) cout<<u<<" ";
    }

    
}
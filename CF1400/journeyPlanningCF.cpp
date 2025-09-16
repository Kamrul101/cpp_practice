#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
int a[mx];
int main() {
    optimize();
    int n;
    cin>>n;
    map<int,vector<int>> mp;
    for(int i=0;i<n;i++) cin>>a[i];
    // sort(a,a+n);
    ll mx = -1,mxV;
    for(int i=0;i<n;i++){
        int x = a[i] - i-1;
        mp[x].push_back(a[i]);
    }

    for(auto u:mp){
        ll sum= 0;
        for(auto x:u.second){
            sum+=x;
        }
        mx = max(sum,mx);
    }
    cout<<mx<<endl;
}
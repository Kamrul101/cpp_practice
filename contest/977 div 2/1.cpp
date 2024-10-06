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
        vector<int> v;
        ll mx=-1,mxI;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            v.push_back(x);
            if(mx<x){
                mx = x;
                mxI=i;
            }
        }
        sort(v.begin(),v.end());
        ll res = v[0];
        for(int i=1;i<v.size();i++){
            res = (res+v[i])/2;
        }
        cout<<res<<endl;
    }
}
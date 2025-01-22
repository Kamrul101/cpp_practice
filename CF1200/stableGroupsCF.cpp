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
    ll k, x;
    cin>>n>>k>>x;
    vector<ll> v(n),a;
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    int cnt = 0;
    for(int i=0;i<n-1;i++){
        a.push_back(max<ll>(0,(v[i+1]-v[i]-1)/x));
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n-1;i++){
        if(k>=a[i]){
            cnt++;
            k-=a[i];
        }
    }
    cout<<n-cnt<<endl;

    
}
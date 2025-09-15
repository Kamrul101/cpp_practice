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
        vector<ll> v1,v2;
        ll sum = 0;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            if(x%2==0){ 
                v1.push_back(x);
                sum+=x;
            }
            else v2.push_back(x);
        }
        if(v2.size()==0){
            cout<<0<<endl;
            continue;
        }
        sort(v2.rbegin(),v2.rend());
        int x = v2.size();
        for(int i=0;i<(x+1)/2;i++) sum+=v2[i];
        cout<<sum<<endl;
        
        
    }
    
}
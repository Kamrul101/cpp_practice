#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx=60;
int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        int sum = 0, last=0;
        bool ans = false;
        for(int i=0;i<n;i++){
            sum+=v[i];
            if(sum==k) {
                cout<<0<<endl;
                ans = true;
                break;
            }
            else if(sum>k){
                sum-=v[i];
                cout<<k-sum<<endl;
                ans = true;
                break;
            }
        }
        if(!ans) cout<<k-sum<<endl;
    }
    
}
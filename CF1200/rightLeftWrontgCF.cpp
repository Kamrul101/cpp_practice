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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        string s;
        cin>>s;

        vector<ll> pre(n+1,0);
        for(int i=1;i<=n;i++) pre[i] = a[i-1] + pre[i-1];

        int l=0,r=n-1;
        ll sum = 0;
        while(l<r){
            while(l<n && s[l]!='L') l++;
            while(r>=0 && s[r]!='R') r--;
            if(l<r){
                sum+= pre[r+1] - pre[l];
                l++;
                r--;
            }
        }
        cout<<sum<<endl;

        
    }
    
}
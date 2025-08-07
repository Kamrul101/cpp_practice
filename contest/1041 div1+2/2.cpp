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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(k==1 || k==n){
            cout<<1<<endl;
            continue;
        }
        k--;
        int cnt1 = 1,cnt2=1;
        int r=k,l=k;

        while(l>=0 && s[l]=='.') l--;
        while(r<n && s[r]=='.') r++;

        if(l==-1 && r==n){
            cout<<1<<endl;
            continue;
        }
        cnt1 = min(k+1,n-r+1);
        cnt2 = min(l+2,n-k);
        cout<<max(cnt1,cnt2)<<endl;
        // cout<<cnt1<<" "<<cnt2<<endl;
        // cout<<l<<" "<<r<<endl;
        
        
    }
    
}
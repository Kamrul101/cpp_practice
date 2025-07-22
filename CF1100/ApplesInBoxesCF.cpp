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
        ll sum=0,mn=INT_MAX,mx=-1;
        vector<ll> v(n);
        int cnt=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
            mn = min(mn,v[i]);
            mx = max(mx,v[i]);
            
        }
        sort(v.begin(),v.end());
        for(int i=n-1;i>=0;i--){
            if(v[i]-mn>k) cnt++;
            else break;
        }
        // // cout<<mn<<" "<<mx<<endl;
        // cout<<cnt<<endl;
        if((mx-mn)>(k+1) || cnt>=2) cout<<"Jerry"<<endl;
        else if(sum%2) cout<<"Tom"<<endl;
        else cout<<"Jerry"<<endl;
        
    }
    
}
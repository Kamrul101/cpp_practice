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
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        int val = v[k-1],idx;
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            if(v[i]==val) idx = i;
        }

        int x = 0;
        bool ans = true;
        for(int i=idx;i<n-1;i++){
            if(v[i+1]-v[i]>val){
                cout<<"NO"<<endl;
                ans = false;
                break;
            }
        }
        if(ans) cout<<"YES"<<endl;
        
    }
    
}
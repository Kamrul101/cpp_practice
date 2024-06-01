#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5 + 123;
// int a[mx];
const int mx = 3e4+123;
ll preSum[mx];

int main()
{
    optimize();
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        string s,p;
        cin>>s>>p;
        int n = s.size();
        int m = p.size();
        ll ans=0;
        for(int i=0;i<10;i++){
            char c = 'a'+i;
            for(int i=0;i<n;i++){
                preSum[i+1] = preSum[i] + (c==s[i]);
            }
            for(int i=0;i<m;i++){
                if(c==p[i]){
                    int l = i+1;
                    int cnt = m-i-1;
                    int r  = n-cnt;
                    ans+=(preSum[r] - preSum [l-1]);
                }
            }
        }
        cout<<"Case "<<i<<": "<<ans<<endl;
        
    }
}

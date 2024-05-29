#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
const int mx = 1e5 + 123;
int a[mx];
ll preSum[mx] = {0};

int main()
{
    optimize();
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n, m;
        cin>>n>>m;
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<=n;i++) preSum[i]=preSum[i-1]+a[i];
        for(int i=1;i<=n;i++) preSum[i]%=m;
        map<int,int>cnt;
        cnt[0]++;
        ll ans = 0;
        for(int i=1;i<=n;i++) {
            ans+= cnt[preSum[i]];
            cnt[preSum[i]]++;
        }
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
}

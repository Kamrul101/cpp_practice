#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
const int mx = 2e5 + 123;
int a[mx];
ll preSum[mx] = {0};

int main()
{
    optimize();
    
    
        int n;
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<=n;i++) preSum[i]=preSum[i-1]+a[i];
        for(int i=1;i<=n;i++) {
            if(preSum[i]<0){
                preSum[i]=((preSum[i]%n)+n)%n;
            }
            else preSum[i]%=n;
        }
        map<int,int>cnt;
        cnt[0]++;
        ll ans = 0;
        for(int i=1;i<=n;i++) {
            ans+= cnt[preSum[i]];
            cnt[preSum[i]]++;
        }
        cout<<ans<<endl;
    
}

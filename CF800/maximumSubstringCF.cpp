#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
// const int mx = 2e5 + 123;


int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt1=0;
        ll ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0') cnt1++;
        } 
        ans = 1LL * cnt1 * (n-cnt1);
        for(int i=0;i<n;){
            int j=i;
            while(j<n && s[i]==s[j]){
                j++;
            }
            ans = max(ans, 1LL*(j-i)*(j-i) );
            i=j;
        }
        cout<<ans<<endl;

    }
}
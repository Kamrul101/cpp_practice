#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
const int mx = 5e5 + 123;
// ll a[mx];

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
        int cnt=0;
        int mn=INT_MAX,mx=-1;
        for(int i=0;i<n;i++){
            if(s[i]=='1') {
                cnt++;
                mn = min(mn,i);
                mx = max(mx,i);
            }
        }
        
        if(cnt%2 == 1) cout<<"NO"<<endl;
        else if(cnt==2 && (mx-mn)==1 ){
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }

}

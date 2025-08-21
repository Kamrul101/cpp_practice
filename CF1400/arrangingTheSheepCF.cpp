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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='*') cnt++;
        }
        int cur = 0;
        int pos = -1;
        for(int i=0;i<n;i++){
            if(s[i]=='*'){
                cur++;
                if(cur==(cnt+1)/2) pos = i;
            }
        }
        ll ans = 0;
        int x = pos-1;
        for(int i=x;i>=0;i--){
            if(s[i]=='*'){
                ans+=1LL*(x-i);
                x--;
            }
        }
        x = pos+1;
        for(int i=x;i<n;i++){
            if(s[i]=='*'){
                ans+=(i-x);
                x++;
            }
        }
        cout<<ans<<endl;
    }
    
}
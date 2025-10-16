#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =1e8+123;
// int a[mx];

char flip(char x) {
    return (x=='0'?'1':'0');
}

int solve(int n, string s){
    int res = 0;
    for(int i=0;i<n-1;i++){
        if((s[i]-'0') != (i&1)){
            s[i] = flip(s[i]);
            s[i+1] = flip(s[i+1]);
            if(i+2<n) s[i+2] = flip(s[i+2]);
            res++;
        }
    }
    if((s[n-1]-'0') != ((n-1)&1)) return mx;
    return res;
}

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        if(n==1) {
            if(s[0]=='0') cout<<0<<endl;
            else cout<<1<<endl;
            continue;
        }

        int ans = solve(n,s);
        s[0]^=1;
        s[1]^=1;
        ans = min(ans,solve(n,s)+1);

        s[n-1]^=1;
        s[n-2]^=1;

        ans = min(ans,solve(n,s)+2);

        s[0]^=1;
        s[1]^=1;

        ans = min(ans,solve(n,s)+1);

        if(ans>=mx) ans = -1;
        cout<<ans<<endl;

        
    }
    
}
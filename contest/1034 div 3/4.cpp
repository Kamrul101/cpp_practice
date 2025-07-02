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
        int pref[n];
        pref[0] = s[0]-'0';
        for(int i=1;i<n;i++){
            pref[i] = pref[i-1] + (s[i]-'0');
        }
        if(pref[n-1]==0 || pref[n-1]<=k){
            cout<<"Alice"<<endl;
            continue;
        }
        if(n>=2*k){
            cout<<"Bob"<<endl;
            continue;
        }
        int tot = pref[n-1];
        bool ans = false;
        for(int i=0;i+k-1<n;i++){
            int l;
            
            int x = pref[i+k-1] - (i>0?pref[i-1]:0);
            if(tot-x<=k){
                cout<<"Alice"<<endl;
                ans = true;
                break;
            }

        }
        if(!ans) cout<<"Bob"<<endl;
    }
    
}
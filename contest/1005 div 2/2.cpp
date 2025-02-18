#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        map<int,int>mp;
        for (int i=0; i<n;i++) {
            cin>>a[i];
            mp[a[i]]++;
        }

        map<int,int> mp1;
        for (auto u:mp) {
            if (u.second==1) mp1[u.first] = 1;
        }
        int mx = 0, minL = -1, maxR = -1;
        for (int l=0,r=0;r<n;r++) {
            if (mp1.find(a[r])==mp1.end()) l = r+1;
            else {
                int len = r-l+1;
                if (len > mx) {
                    mx = len;
                    minL = l;
                    maxR = r;
                }
            }
        }
        if (mx==0) cout<<0<<endl;
        else cout<<minL+1<<" "<<maxR+1<<endl;
        
    }
    
}
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
        cin >> n;
        vector<int> a(n);
        map<int,int> cnt;
        set<int> b;
        for (int i = 0;i<n;i++) {
            cin >> a[i];
            cnt[a[i]]++;
            b.insert(a[i]);
            b.insert(a[i]+1);
        }
        int last = 0;
        int res = 0;
        for (auto u: b) {
            int c = cnt[u];
            res += max(0, c - last);
            last = c;
            
        }
        cout<<res<<endl;
    }
    
}
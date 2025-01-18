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
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> v;
        v.resize(n);
        for (int i=0;i<n;i++) {
            cin>>v[i];
        }
        vector<int> l(n,0), r(n,n-1),ans(n);
        for(int i=0;i<n;i++){
            int cnt = 0;
            for(int j=0;j<n;j++){
                if(l[j]==l[i] && r[j]==r[i] && v[i][j]=='1') cnt++;
            }
            int pos = r[i] - cnt;
            ans[pos] = i+1; 
            for(int j=0;j<n;j++){
                if(l[j]==l[i] && r[j]==r[i] && i!=j){
                    if(v[i][j]=='0'){
                        r[j] = pos - 1;
                    }
                    else{
                        l[j] = pos+1;
                    }
                }
            }
            l[i] = r[i] = pos; 
        }
        for(auto u:ans) cout<<u<<" ";
        cout<<endl;
    }
}

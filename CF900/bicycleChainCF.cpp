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
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int m;
    cin>>m;
    vector<int> b(m);
    for(int i=0;i<m;i++) cin>>b[i];

    map<int,int> mp;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(b[j]%a[i]==0){
                mp[(b[j]/a[i])]++;
            }
        }
    }
    int mx=-1;
    int ans;
    for(auto u:mp){
        if(u.first>mx) {
            mx = u.first;
            ans = u.second;
        }
        
    }
    cout<<ans<<endl;

    
}
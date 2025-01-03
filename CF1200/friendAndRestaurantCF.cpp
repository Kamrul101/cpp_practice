#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =1e5+123;
ll a[mx],b[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        vector<pair<ll,int>> v(n);
        for(int i=0;i<n;i++){
            v[i].first = b[i] - a[i];
            v[i].second = i;
        }
        sort(v.rbegin(),v.rend());
        int cnt1 = 0,cnt2=0, j = n-1;
        for(int i=0;i<n;i++){
            while(j>i && v[j].first+ v[i].first<0) j--;
            if(j<=i) break;
            cnt1++;
            j--;
        }
        cout<<cnt1<<endl;
        
    }
    
}
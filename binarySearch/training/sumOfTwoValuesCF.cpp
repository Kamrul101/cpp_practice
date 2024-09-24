#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
// ll a[mx];
int main() {
    optimize();
    int n,k;
    cin>>n>>k;
    vector<pair<int, int>> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back({x,i+1});
        
    }
    sort(v.begin(),v.end());
    int ans1,ans2;
    bool ans = false;
    for(int i=0;i<n;i++){
        int req = k - v[i].first;
        int l=0,h=n-1;
        while(l<=h){
            int mid = l+(h-l)/2;
            if(v[mid].first==req && mid!=i) {
                ans1 = v[i].second;
                ans2 = v[mid].second;
                ans = true;
                break;
            }
            else if(v[mid].first<req) l = mid +1;
            else h = mid -1;
        }
        if(ans) break;
    }
    if(!ans) cout<<"IMPOSSIBLE"<<endl;
    else cout<<ans1<<" "<<ans2<<endl;
}
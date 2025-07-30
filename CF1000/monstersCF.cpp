#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
// int a[mx];
bool cmp(pair<int, int>& a, pair<int, int>& b){
    if(a.first !=b.first) return a.first>b.first; 
    return a.second < b.second;
}
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>>vp;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            x%=k;
            if(!x) x = k;
            vp.push_back({x,i});
        }
        sort(vp.begin(),vp.end(),cmp);
        for(auto u:vp){
            cout<<u.second+1<<" ";
        }
        cout<<endl;
    }
    
}
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
int check(int l, int r, vector<int> &preSum){
    return preSum[r] - (l?preSum[l-1]:0);
}
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v(n),preSum(n);
        for(auto &u:v){
            cin>>u;
        }
        preSum[0] = v[0];
        for(int i=1;i<n;i++) preSum[i] = preSum[i-1]+v[i];
        int ans = INT_MAX;
        for(int i=0;i<n;i++){
            int l = i, h = n-1, pos=-1;
            while(l<=h){
                int mid = l+h>>1;
                if(check(i,mid,preSum)<=k){
                    pos = mid;
                    l = mid+1;
                }
                else h = mid -1;
            }
            if(pos==-1 || check(i,pos,preSum)!=k) continue;
            ans = min(ans,n-(pos-i+1));
        }
        if(ans==INT_MAX) cout<<-1<<endl;
        else cout<<ans<<endl; 
    }
    
}
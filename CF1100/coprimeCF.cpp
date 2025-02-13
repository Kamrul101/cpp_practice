#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =1001;
// int a[mx];
vector<int> coPrime[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    for(int i=1;i<=1000;i++){
        for(int j=1;j<=1000;j++){
            if(__gcd(i,j)==1){
                coPrime[i].push_back(j);
            }
        }
    }
    while(t--){
        int n;
        cin>>n;
        vector<int> id(1001,-1);
        int ans = -1;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            id[x] = i ;
        }
        for(int i=1;i<=1000;i++){
            if(id[i]==-1) continue;
            if(i==1){
                ans = max(ans,2*id[i]);
                continue;
            }
            for(auto j:coPrime[i]){
                if(id[j]!=-1){
                    ans  =max(ans,id[i]+id[j]);
                }
            }
        }
        
        cout<<ans<<endl;
        
    }
    
}
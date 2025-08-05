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
        cin>>n;
        vector<pair<int,int>>vp(n);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            vp[i] = {x,i};
        }
        sort(vp.rbegin(),vp.rend());
        vector<int> v(n+1);
        v[0] = 0;
        int cnt = 1;
        ll sum = 0;
        for(int i=0;i<n;i++){
            int x = vp[i].second;
            v[x+1] = cnt;
            sum+=1LL*abs(cnt)*vp[i].first*2;
            if(cnt>0) cnt *=-1;
            else{
                cnt*=-1;
                cnt+=1;
            }
        }
        cout<<sum<<endl;
        for(int i=0;i<=n;i++) cout<<v[i]<<" ";
        cout<<endl;
        
    }
    
}
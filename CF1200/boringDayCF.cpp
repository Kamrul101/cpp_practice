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
        int n, l , r;
        cin>>n>>l>>r;

        vector<ll> v(n);
        for(int i=0;i<n;i++) cin>>v[i];

        deque<ll> dq;
        ll sum=0,cnt=0;
        for(int i=0;i<n;i++){
            sum+=v[i];
            dq.push_back(v[i]);
            
            if(sum>=l && sum<=r){
                cnt++;
                sum=0;
                dq.clear();
            }
            else if(sum>r){
                while(!dq.empty()){
                    ll x = dq.front();
                    dq.pop_front();
                    sum-=x;
                    if(sum>=l && sum<=r){
                        dq.clear();
                        cnt++;
                        sum=0;
                    }
                    else if(sum<l){
                        break;
                    }
                }
            }
        }
        cout<<cnt<<endl;
        
    }
    
}
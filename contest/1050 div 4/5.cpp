#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        map<int,int>mp;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            mp[a[i]]++;
        }
        bool check = true;
        map<int,int> mp2;
        for(auto u:mp){
            if(u.second%k!=0){
                check = false;
                break;
            }
            mp2[u.first] = u.second/k;
        }
        if(!check){
            cout<<0<<endl;
            continue;
        }

        deque<int> dq;
        mp.clear();
        ll ans = 0;

        for(int i=0;i<n;i++){
            int x = a[i];
            dq.push_back(x);
            mp[x]++;
            while(mp[x]>mp2[x]){
                int val = dq.front();
                dq.pop_front();
                mp[val]--;
            }
            ans+=(ll) dq.size();
        }
        cout<<ans<<endl;


        
    }
    
}
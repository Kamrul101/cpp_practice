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
        vector<ll> v(n);
        map<ll,ll>mp1,mp2;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp1[v[i]]++;
        }
        ll cnt=0;
        while(1){
            if(mp1[cnt]>0){
                mp1[cnt]--;
                ll f = mp1[cnt];
                mp2[cnt%k]+=f;
                cnt++;
            }
            else if(mp2[cnt%k]>0){
                mp2[cnt%k]--;
                cnt++;
            }
            else break;
        }
        cout<<cnt<<endl;
        
    }
    
}
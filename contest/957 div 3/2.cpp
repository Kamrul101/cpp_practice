#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

const int mx = 1e5+123;
int a[mx];

int main() {
    optimize();
    
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll cnt1=0;
        vector<int>v(k);
        for(int i=0;i<k;i++){
            cin>>v[i];
        }
        sort(v.rbegin(),v.rend());
        ll lg =0;
        for(int i=1;i<k;i++){
            if(v[i]>1) {
                lg+=(v[i]-1)+v[i];    
            }
            else lg++;
            
        }
        cout<<lg<<endl;
    }
    
   
    
}
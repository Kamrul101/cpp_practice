#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
ll v[mx],t[mx];
int main() {
    optimize();
    int n,q;
    cin>>n>>q;
    ll sum=0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
        t[i]=-1;
    }
    ll x,a,b,c, lastSecondQuery=-2,lastSecondQueryval= 0;
    for(int i=0;i<q;i++){
        cin>>x;
        if(x==1){
            cin>>a>>b;
            a--;
            if(lastSecondQuery>t[a]){
                sum=sum-lastSecondQueryval+b;
            }
            else{
                sum = sum-v[a]+b;
                
            }
            t[a] = i;
            v[a] = b;
        }
        else{
            cin>>c;
            sum=(n*c);
            lastSecondQuery=i;
            lastSecondQueryval = c;
        }
        cout<<sum<<endl;
    }

    
}
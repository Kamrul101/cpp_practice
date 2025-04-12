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
        ll n,w;
        cin>>n>>w;
        multiset<ll>ms;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            ms.insert(x);
        }
        int h=1,left=w;
        while(!ms.empty()){
            auto itr = ms.upper_bound(left);
            if(itr==ms.begin()){
                left=w;
                h++;
            }
            else{
                itr--;
                int val = *itr;
                left-=val;
                ms.erase(itr);
            }
        }
        cout<<h<<endl;      
    }
    
}
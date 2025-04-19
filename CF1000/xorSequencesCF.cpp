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
        ll x,y;
        cin>>x>>y;
        for(int i=0;i<30;i++){
            if((x&(1<<i)) != (y&(1<<i))){
                cout<<(1LL<<i)<<endl;
                break;
            }
        }
        
    }
    
}
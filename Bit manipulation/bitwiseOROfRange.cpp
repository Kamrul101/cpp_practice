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
int bitwiseORrange(int l,int r){
    int ans = 0;
    for(int i=0;i<31;i++){
        int bit=1<<i;
        int blockL=l>>i;
        int blockR=r>>i;
        if(blockL<blockR) ans|=bit;
        else{
            if(r&bit) ans|=bit;
        }
    }
    return ans;
}
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int ans = bitwiseORrange(n,m);
        cout<<ans<<endl;
        
    }
    
}
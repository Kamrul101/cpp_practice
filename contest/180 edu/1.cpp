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
        int a,x,y;
        cin>>a>>x>>y;
        if(x>y) swap(x,y);
        bool ans = false;
        for(int i=x;i<=y;i++){
            int x1 = abs(i-x);
            int x2 = abs(i-y);
            if(x1<abs(a-x) && x2<abs(a-y)){
                ans = true;
                break;
            }
        }
        if(!ans) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        
    }
    
}
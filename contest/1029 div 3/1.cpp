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
        int n,x;
        cin>>n>>x;
        int first=-1,last=-1;
        for(int i=1;i<=n;i++){
            int y;
            cin>>y;
            if(first==-1 && y==1) first=i;
            if(y==1) last=i;
        }
        if(first+x-1>=last) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        // if(first==-1 && last==-1) cout<<"YES"<<endl;

        
    }
    
}
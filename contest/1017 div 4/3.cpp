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
        int n;
        cin>>n;
        vector<int> v(2*n+1,0),vis(2*n+1,0);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                int x;
                cin>>x;
                if(v[i+j]==0){
                    v[i+j] = x;
                    vis[x] =1;
                }
            }
        }
        int c;
        for(int i=1;i<=2*n;i++){
            if(vis[i]==0){
                c =i;
            }
        }
        for(int i=1;i<=2*n;i++){
            if(v[i]==0){
               v[i]=c;
            }
        }
        for(int i=1;i<=2*n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;

        
    }
    
}
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
        string a,b;
        cin>>a>>b;

        int n = a.size();
        int m = b.size();

        int ans = n+m;


        for(int i=0;i<m;i++){
            int j=i;
            for(auto u:a){
                if(j<m && b[j]==u) j++;
            }
            ans = min(ans,n+m-(j-i));
        }
        cout<<ans<<endl;
        
    }
    
}
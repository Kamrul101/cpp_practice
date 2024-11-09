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
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        int ans = 0;
        int x=0;
        for(int t=0;t<2;t++){
           for(int i=n-1;i>=0;i--){
                if(s[i]=='g') x = 0;
                else x++;
                if(s[i]==c && t){
                    ans = max(ans,x);
                }
            } 
        }
        
        cout<<ans<<endl;
        
    }
    
}
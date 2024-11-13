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
        string s[2];
        cin>>s[0]>>s[1];
        int ans = 0;
        for(int i=0;i<2;i++){
            for(int j=1;j<n-1;j++){
                if(s[0][j]!='.' || s[0][j-1]!='.' || s[0][j+1]!='.') continue;
                if(s[1][j]!='.' || s[1][j-1]!='x' || s[1][j+1]!='x') continue;
                ans++;
            }
            swap(s[0],s[1]);
        }
        cout<<ans<<endl;
        
    }
    
}
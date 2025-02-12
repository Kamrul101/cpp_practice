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
        ll k;
        cin>>n>>k;
        vector<vector<int>> v(n,vector<int>(n)),c(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>v[i][j];
                c[i][j]=v[i][j];
            }
        }
        reverse(c.begin(),c.end());
        for(int i=0;i<n;i++){
            reverse(c[i].begin(),c[i].end());
        }
        bool ans = true;
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(v[i][j]!=c[i][j]){
                    cnt++;
                }
            }
            // if(!ans) break;
        }
        cnt/=2;
        if(k<cnt) cout<<"NO"<<endl;
        else{
            k-=cnt;
            if(n%2 || k%2) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

        
    }
    
}
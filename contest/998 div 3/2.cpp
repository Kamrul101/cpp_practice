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
        int n,m;
        cin>>n>>m;
        vector<vector<int>> v(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[i][j];
            }
            sort(v[i].begin(),v[i].end());
        }
        vector<int> p(n);
        for(int i=0;i<n;i++) p[i]= i+1;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(v[i][0]>v[j][0]){
                    swap(v[i],v[j]);
                    swap(p[i],p[j]);
                }
            }
        }
        int cnt=0;
        bool ans = true;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(v[j][i]!=cnt){
                    cout<<-1<<endl;
                    ans = false;
                    break;
                }
                cnt++;
            }
            if(!ans) break;
        }
        if(ans) {
            for(int i=0;i<n;i++) cout<<p[i]<<" ";
            cout<<endl;
        }
        
    }
    
}
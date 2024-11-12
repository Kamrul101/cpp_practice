#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =102;
int a[mx],b[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
       int k,n,m;
       cin>>k>>n>>m;
       for(int i=0;i<n;i++) cin>>a[i];
       for(int i=0;i<m;i++) cin>>b[i];

       int i=0,j=0;
       vector<int> v;
       bool ans = true;
       while(i<n || j<m){
            if(i<n && a[i]==0){
                v.push_back(0);
                i++;
                k++;
            }
            else if(j<m && b[j]==0){
                v.push_back(0);
                j++;
                k++;
            }
            else if(i<n && a[i]<=k){
                v.push_back(a[i]);
                i++;
            }
            else if(j<m && b[j]<=k){
                v.push_back(b[j]);
                j++;
            }
            else{
                cout<<-1<<endl;
                ans= false;
                break;
            }
       }
       if(ans){
            for(auto u:v) cout<<u<<" ";
            cout<<endl;
       }
        
    }
    
}
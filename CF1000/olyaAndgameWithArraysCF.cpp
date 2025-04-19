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
        vector<vector<ll>> v(n);
        vector<ll> v1;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            for(int j=0;j<x;j++){
                int y;
                cin>>y;
                v[i].push_back(y);
            }
            sort(v[i].begin(),v[i].end());
            v1.push_back(v[i][1]);
        }
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
        ll mn = v[0][0];
        ll sum=0;
        if(n==1) cout<<mn<<endl;
        else{
            for(int i=1;i<n;i++){
                sum+=v1[i];
                // cout<<v1[i]<<" ";
            }
            cout<<sum+mn<<endl;

        }
        
    }
    
}
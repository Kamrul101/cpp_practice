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

int query(int x, vector<int>v){
    cout<<"? "<<x<<" "<<v.size();
    for(auto u:v) cout<<" "<<u;
    cout<<endl;


    int val;
    cin>>val;

    return val;
}

int main() {
    // optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        for(int i=1;i<=n;i++) v.push_back(i);

        vector<vector<int>> vec(n+1);
        int mx = -1;

        for(int i=1;i<=n;i++){
            int val = query(i,v);
            vec[val].push_back(i);
            mx = max(mx,val);
        }

        // cout<<mx<<endl;

        vector<int> ans;
        int prev=vec[mx][0];
        ans.push_back(vec[mx][0]);
        for(int i=mx-1;i>=1;i--){
            for(auto u:vec[i]){
                int q = query(prev,{prev,u});
                if(q==2){
                    ans.push_back(u);
                    prev = u;
                    break;
                }
            }
        }
        cout<<"! "<<ans.size()<<" ";
        for(auto u:ans) cout<<u<<" ";
        cout<<endl;

    
        
    }
    
}
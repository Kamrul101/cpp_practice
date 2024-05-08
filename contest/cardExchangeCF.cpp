#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        map<int,int> m;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            m[x]++;
        }
        bool ans = true;
        for(auto u:m){
            if(u.second >= k) {
                cout<<k-1<<endl;
                ans=false;
                break;
            }
        }
        if(ans) cout<<n<<endl;        
    }
}

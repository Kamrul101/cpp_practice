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
        int n;
        cin>>n;
        map<int,int> m;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            m[x]++;
        }
        int ans=0;
        for(auto u:m){
            int k = u.second/3;
            ans+=k;
        }
        cout<<ans<<endl;
    }
}

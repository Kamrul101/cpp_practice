#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef long double ld ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
const int mx = 2e5+123;
int a[mx];
// ll preSum[mx]={0};


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>n>>m;
        vector<pair<int,int>>p(n);
        vector<int>b(n),ans(n);
        for(int i=0;i<n;i++){
            cin>>p[i].first;
            p[i].second = i;
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(p.begin(),p.end());
        sort(b.begin(),b.end());
        for(int i=0;i<n;i++){
            ans[p[i].second]=b[i];
        }
        for(int i=0;i<n;i++) cout<<ans[i]<<" ";
        cout<<endl;
    }
}

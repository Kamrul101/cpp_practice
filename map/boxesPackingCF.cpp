#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
const int mx = 2e6+123;
long long a[mx];

int main() {
    optimize();
    int t;
    cin>>t;
    map<int,int>cnt;
    for(int i=0;i<t;i++){
        
    cin>>a[i];
    cnt[a[i]]++;
    }
    int ans = 0;
    for(int i=0;i<t;i++){
        ans= max(ans,cnt[a[i]]);
    }
    cout<<ans<<endl;
}
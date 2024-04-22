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
        vector<int> v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        int ans = 1,cnt=1;
        sort(v.begin(),v.end());
        for(int i=1;i<n;i++){
            if(v[i]-v[i-1]>k){
                cnt=1;
            }
            else{
                cnt++;
            }
            ans = max(ans,cnt);
        }
        cout<<n-ans<<endl;
    }
}

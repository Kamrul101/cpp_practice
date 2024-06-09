#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
const int mx = 2e5 + 123;
// int a[mx];
// ll preSum[mx] = {0};



int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       vector<int>v(n+1),ans(n+1);
       int mn=INT_MAX,mnI=0;
       for(int i=1;i<=n;i++){
        cin>>v[i];
           
       }
       for(int i=1;i<n;i++){
        if(v[i]>v[i+1]){
            mnI= i;
            break;
        }
       }
       
       
       if(!mnI) cout<<"YES"<<endl;
       else{
        for(int i=mnI+1;i<=n;i++){
        ans[i-mnI] = v[i];
       } 
       for(int i=1;i<=mnI;i++){
        ans[n-mnI + i] = v[i];
       }
       
       bool f =  is_sorted(ans.begin(),ans.end());
       if(f) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
       }
       
    }
    
}

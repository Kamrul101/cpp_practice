#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e6+123;
// long long a[mx];

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        vector <int> v;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        
        int ans = 1;
        for(int i=1;i<n;i++){
            if(v[i]-v[i-1]>1){
                ans= 0;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(ans == 1) cout<<"YES"<<endl;
        
    }
    
}

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
        vector<int>a(n),b(n);
        int mn=INT_MAX;
        bool ans = true;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<mn) mn=a[i];
        }
        b = a;
        sort(b.begin(),b.end());
        
        for(int i=0;i<n;i++){
            if(a[i]!=b[i] && b[i]%mn!=0){
                ans=false;
                break;
            }
            
        }
        
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

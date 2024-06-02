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
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans = 2;
        if(is_sorted(a.begin(),a.end())) ans=0;
        else if(a[0]==1 || a[n-1]==n) ans = 1;
        else if(a[0]==n && a[n-1]==1) ans =3;
        cout<<ans<<endl;
        
    }
}

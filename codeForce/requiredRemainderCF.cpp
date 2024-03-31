#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        long long x,y,n,ans1=0,ans2=0;
        cin>>x>>y>>n;
        
        // ans1+=n-(n%x)-(x-y);
        ans2+=n-((n-y)%x);
         cout<<ans2<<endl;
           
    }
    
}

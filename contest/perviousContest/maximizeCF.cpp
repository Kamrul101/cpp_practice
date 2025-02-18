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
        int x;
        cin>>x;
        vector<int> v;
        int mx=-1, ans=0;;
        for(int i=1;i<x;i++){
            int y = __gcd(x,i)+i;
            if(mx<y){
                mx=y;
                ans=i;
            }
        }
        cout<<ans<<endl;
        
    }
}

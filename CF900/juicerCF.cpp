#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// ll a[mx];


int main() {
    optimize();
    ll n,b,d;
    cin>>n>>b>>d;
    ll sum=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        int x;

        cin>>x;
        if(x<=b) {
            sum+=x;
            if(sum>d){
            cnt++;
            sum=0;
        }
        }
        
    }
    cout<<cnt<<endl;
        
    
}

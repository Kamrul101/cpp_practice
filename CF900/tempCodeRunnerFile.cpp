#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
const int mx = 2e5+123;
ll a[mx];


int main() {
    optimize();
    ll n,b,d;
    cin>>n>>b>>d;
    int sum=0,cnt=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<=d) {
            sum+=a[i];
            if(sum>d){
            sum=0;
            cnt++;
        }
        }
        
    }
    cout<<cnt<<endl;
        
    
}

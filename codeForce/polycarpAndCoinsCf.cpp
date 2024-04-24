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
        ll n;
        cin>>n;
        int x;
        
        int rem =  n%3;
        x= n/3;
        if(rem==0) cout<<x<<" "<<x<<endl;
        else if(rem==1) cout<< x+1<<" "<<x<<endl;
        else cout<<x<<" "<<x+1<<endl;
        
        
    }
}

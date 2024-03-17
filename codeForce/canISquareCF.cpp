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
        long long n,sum=0;
        cin>>n;
    for(int i=0;i<n;i++){
        long long a;
        cin>>a;
        sum+=a;
    }
    long long a = sqrt(sum);
    if(a*a == sum){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    }
    
    
}
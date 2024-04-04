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
       vector<int> v;
       for(int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
       }
       sort(v.begin(),v.end());
       ll a,b,c,d;
       a=v[0];
       b=v[1];
       c=v[n-1];
       d = v[n-2];
       cout<< 2*(d+c) - 2*(a+b)<<endl;
    }

}

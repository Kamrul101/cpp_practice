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
       string s,s1;
       cin>>s;
       s1 = s;
       reverse(s1.begin(),s1.end());
       string a;
       a+=s1;
       a+=s;
       if(a<s) cout<<a<<endl;
       else cout<<s<<endl;
    }

}

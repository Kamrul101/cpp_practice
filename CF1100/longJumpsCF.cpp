#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
ll a[mx];


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       for(int i=0;i<n;i++) cin>>a[i];
       vector<int> v(n);
       for(int i = n-1;i>=0;i--){
         v[i] = a[i];
         int j  =  i + a[i];
         if(j<n) v[i]+=v[j];
       }
       cout<<*max_element(v.begin(),v.end())<<endl;

    }
    
}
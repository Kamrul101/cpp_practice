#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
// const int mx =2e5+123;
// int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int bit[31]={0};
        for(auto u:v){
            bitset<32> binary(u);
            for(int i=0;i<31;i++){
                bit[i]+=binary[i];
            }
        }
        int gcd = 0;
        for(auto u:bit){
            gcd =__gcd(u,gcd);
        }
        if(!gcd){
            for(int i=1;i<=n;i++) cout<<i<<" ";
            cout<<endl;
            continue;
        }
        for(int i=1;i<=gcd;i++){
            if(gcd%i==0){
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
    
}
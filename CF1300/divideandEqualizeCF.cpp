#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
int a[mx];
void primeDiv(int x, map<int,int>&mp){
    for(int i=2;i*i<=x;i++){
        while(x % i == 0){
            mp[i]++;
            x /= i;
        }
    }
    if(x>1) mp[x]++;
}
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        map<int,int> mp;
        for(int i=0;i<n;i++){
            primeDiv(a[i],mp);
        }
        bool check = true;
        for(auto u:mp){
            if(u.second%n!=0){
                cout<<"NO"<<endl;
                check = false;
                break;
            }
        }
        if(check) cout<<"YES"<<endl;
        
    }
    
}
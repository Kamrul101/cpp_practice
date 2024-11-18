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
       int k;
       cin>>k;
       int a[k];
       map<int,int> mp;
       for(int i=0;i<k;i++){
            cin>>a[i];
            mp[a[i]]++;
       }
       int x = k-2;
       for(int i=1; i<=x;i++){
            if(x%i==0){
                int c = x/i;
                if(mp[i]>0 && mp[c]>0){
                    cout<<i<<" "<<c<<endl;
                    break;
                }
            }
        }
        
    }
    
}
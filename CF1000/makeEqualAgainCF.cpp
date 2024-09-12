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
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       map<int,int> mp;
       for(int i=1;i<=n;i++) {
            cin>>a[i];
            mp[a[i]]++;
        }
       int k1=0,k2=0;
       if(mp.size()==1) cout<<0<<endl;
       else if(a[1]!=a[n]){
            for(int i=1;i<=n;i++){
                if(a[i]!=a[i+1]) {
                    k1=i; 
                    break;
                }
            }
            for(int j=n;j>=0;j--){
                if(a[j]!=a[j-1]) {
                    k2= n-j+1; 
                    break;
                }
            }
            cout<<n- max(k1,k2)<<endl;
       }
       else{
            for(int i=1;i<=n;i++){
                if(a[i]!=a[i+1]) {
                    k1=i; 
                    break;
                }
            }
            for(int j=n;j>=0;j--){
                if(a[j]!=a[j-1]) {
                    k2= n-j+1; 
                    break;
                }
            }
            cout<<n- (k1+k2) <<endl;
       }

        
    }
    
}
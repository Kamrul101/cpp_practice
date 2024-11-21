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
        int n,k;
        cin>>n>>k;
        for(int i=0;i<n;i++) cin>>a[i];
        bool ans = false;
        if(n==1){
            if(a[0]==k) ans = true;
            else ans = false; 
        }
        else{
            int i=0,j=1;
            sort(a,a+n);
            while(i<n && j<n){
                if(a[i]+k==a[j]){
                    ans = true;
                    break;
                }
                else if(a[i]+k<a[j]) i++;
                else j++;
            }
            if(!ans) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        
    }
    
}
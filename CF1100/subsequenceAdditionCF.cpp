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
        sort(a,a+n);
        if(a[0]!=1) cout<<"NO"<<endl;
        else{
            bool check = true;
            ll sum=1;
            for(int i=1;i<n;i++){
                if(sum<a[i]){
                    cout<<"NO"<<endl;
                    check = false;
                    break;
                }
                sum+=a[i];
            }
            if(check) cout<<"YES"<<endl;
        }
        
    }
    
}
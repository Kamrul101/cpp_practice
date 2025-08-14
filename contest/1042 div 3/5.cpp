#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
int a[mx],b[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        if(a[n-1]!=b[n-1]){
            cout<<"NO"<<endl;
            continue;
        }
        bool check = true;
        for(int i=n-2;i>=0;i--){
            if(b[i]!=a[i]){
                if(b[i]!=(a[i]^a[i+1])){
                    if(b[i]!=(a[i]^b[i+1])){
                        check=false;
                        break;
                    }
                }
            }
        }
        if(check) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    
}
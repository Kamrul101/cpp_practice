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
int check(int n){
    n = n+ (n%10);
    return n;
}
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int mn = INT_MAX,mx=INT_MIN;
        bool c=false;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%5==0){
                a[i] = check(a[i]);
                c =true;
            }
            mn = min(mn,a[i]);
            mx = max(mx,a[i]);
        }
        if(c){
            if(mx==mn){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
            continue;
        }
        bool c2 = false,c12 = false;
        for(int i=0;i<n;i++){
            int x = a[i];
            while(x%10!=2){
                x = check(x);
            }
            if(x%20==2) c2=true;
            else c12 = true;
        }
        if(c12&&c2) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        
    }
    
}
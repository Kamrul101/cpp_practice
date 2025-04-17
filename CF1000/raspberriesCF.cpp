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
        int mn = k;
        int cnt=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0) cnt++;
        }
        for(int i=0;i<n;i++){
            mn = min(mn,(k-(a[i]%k))%k);
        }
        if(k==4){
            mn = min(mn,max(0,2-cnt));
        }
        cout<<mn<<endl;
        
    }
    
}
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
        set<int> s;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            s.insert(a[i]);
        }
        if(s.size()==1){
            cout<<"0"<<endl;
        }
        else{
            int k=0,x = a[n];
            int ans = 0;
            for(int i=n;i>=1;i--){
                // cout<<i<<endl;
                if(a[i]==x) k++;
                else{
                    i-=k;
                    ans++;
                    k+=k;
                    i++;
                }
            }
            cout<<ans<<endl;
        }
        
    }
    
}
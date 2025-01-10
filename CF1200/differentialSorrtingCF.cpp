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
        bool isSorted = true;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i && a[i]<a[i-1]) isSorted = false;
        }
        if(a[n-1]<a[n-2]) cout<<-1<<endl;
        else{
            if(a[n-1]<0){
                if(isSorted) cout<<0<<endl;
                else cout<<-1<<endl;
            }
            else{
                cout<<n-2<<endl;
                for(int i=1;i<=n-2;i++){
                    cout<<i<<" "<<n-1<<" "<<n<<endl;
                }
            }

        }
        
    }
    
}
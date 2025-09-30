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
        int n;
        cin>>n;

        vector<int> p(n+1,0);
        for(int i=2;i<=n;i++){
            int x = 1;
            while(1){
                cout<<"? "<<x<<" "<<i<<endl;
                cout<<flush;

                int y;
                cin>>y;
                
                if(x==y) break;
                x = y;

            }
            p[i] = x;
        }
        cout<<"! ";
        for(int i=2;i<=n;i++){
            cout<<" "<<p[i]<<" "<<i;
        }
        cout<<endl;
        cout<<flush;
    }
    
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
const int mx = 2e5 + 123;
int a[mx];


int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n;
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        
        if(n%2==0){
            cout<<2<<endl;
            for(int i=1;i<=2;i++){
                cout<<1<<" "<<n<<endl;
            }
            
        }
        else{
            cout<<4<<endl;
            for(int i=1;i<=2;i++){
                cout<<1<<" "<<n-1<<endl;
            }
            for(int i=1;i<=2;i++){
                cout<<n-1<<" "<<n<<endl;
            }
        }

    }
}
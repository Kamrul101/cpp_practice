#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

const int mx = 1e7+123;


int main() {
    optimize();
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==3) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            if(n%2==0){
                for(int i=0;i<n;i++){
                    if(i%2==0) cout<<1<<" ";
                    else cout<<-1<<" ";
                }
                cout<<endl;
            }
            else{
                int x = n/2;
                for(int i=0;i<n;i++){
                    if(i%2==0) cout<<x-1<<" ";
                    else cout<<-x<<" ";
                }
                cout<<endl;
            }
        }
    }
    
   
    
}
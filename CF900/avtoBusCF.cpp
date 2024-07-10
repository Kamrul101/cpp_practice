#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

const int mx = 1e5+123;
// int a[mx];

int main() {
    optimize();
    
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n==2) cout<<-1<<endl;
        else if(n%2) cout<<-1<<endl;
        else if(n==4) cout<<1<<" "<<1<<endl;
        else{
            n/=2;
            ll max=0,min=0;
            if(n%2==0){
                max+=(n/2);
            }
            else{
                max+=((n-3)/2)+1;
            }
            if(n%3==0) min+=(n/3);
            else if(n%3==2){
                min+=((n-2)/3)+1;
            }
            else min+=(n-4)/3+2;
            cout<<min<<" "<<max<<endl;
        }
    }
    
   
    
}
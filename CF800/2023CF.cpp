#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
// const int mx = 2e5 + 123;
// int a[mx];
 
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--){
        int b[6];
        int n,k;
        cin>>n>>k;
        bool ans = true;
        ll p=1;
        for(int i=0;i<n;i++){
            cin>>b[i];
            p*=b[i];
        }
            if((2023%p)!=0) ans = false;
        if(ans==false) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            cout<<2023/p<<" ";
            for(int i=0;i<k-1;i++){
                cout<<"1"<<" ";
            }
            cout<<endl;
        }

 
    }
 
}
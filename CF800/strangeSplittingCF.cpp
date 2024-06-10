#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
const int mx = 5e5 + 123;
ll a[mx];

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,mn=INT_MAX,mx = -1;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<mn) mn=a[i];
            if(a[i]>mx) mx = a[i];
        }
        if(mx == mn) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            
            cout<<'B'<<'R';
            for(int i=2;i<n;i++) cout<<'B';
            cout<<endl;
        }
    }

}

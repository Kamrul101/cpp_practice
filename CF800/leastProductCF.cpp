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
        int n;
        cin>>n;
        
        int cntMinus=0,cntZero=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<0) cntMinus++;
            else if(a[i]==0) cntZero++;
        }
        if(cntZero || cntMinus%2) cout<<0<<endl;
        else{
            cout<<1<<endl;
            cout<<1<<" "<<0<<endl;
        }
 
    }
 
}
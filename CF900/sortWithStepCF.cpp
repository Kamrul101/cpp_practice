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
        int n,k;
        cin>>n>>k;
        int res =0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            a[i]--;
            if(a[i]%k != i%k) res++;
        }
        
        if(res==0) cout<<0<<endl;
        else if(res == 2) cout<<1<<endl;
        else cout<<-1<<endl;
        
    }
}
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
        if(n==1){cout<<1<<endl;}
        else if (n>1 && n%2) cout<<-1<<endl;
        else{
            for(int i=1;i<=n;i++) {
                a[i] = i;
            }
            for(int i=1;i<n;i++) {
                swap(a[i],a[i+1]);
                i++;
            }
            for(int i=1;i<=n;i++) {
                cout<<a[i]<<" ";
            }
            cout<<endl;

        }
        
    }
}
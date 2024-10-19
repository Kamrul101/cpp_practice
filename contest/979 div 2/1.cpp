#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =1013;
int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int mx=-1,mn=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mn = min(a[i],mn);
            mx=max(a[i],mx);
        }
        int sum1 = mx + (n-1)*mn;
        int sum2 = mx*n;

        cout<<sum2-sum1<<endl;

        
    }
    
}
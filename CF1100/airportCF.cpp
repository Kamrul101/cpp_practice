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
    int n,m;
    cin>>n>>m;
    vector<int> v(m),a(m);
    for(int i=0;i<m;i++) cin>>v[i];
    a = v;
    sort(v.rbegin(),v.rend());
    sort(a.begin(),a.end());
    int sum1=0,sum2=0;
    int t=n;
    
    for(int i=0;i<n;i++){
        sum1+=v[0];
        v[0]--;
        t--;
        sort(v.rbegin(),v.rend());
    }
    for(int i=0;i<n;i++){
        sum2+=a[0];
        a[0]--;
        if(a[0]<=0) a[0] = INT_MAX;
        sort(a.begin(),a.end());
    }
    
    
    cout<<sum1<<" "<<sum2<<endl;
    
    
}
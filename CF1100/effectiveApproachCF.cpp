#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
// int a[mx];
int main() {
    optimize();
    int n;
    cin>>n;
    map<int,int>mp;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        mp[x]=i;
    }
    ll sumV=0, sumP=0;
    int m;
    cin>>m;
    for(int i=1;i<=m;i++){
        int x;
        cin>>x;
        sumV += mp[x];
        sumP += n-mp[x]+1;
    }
    cout<<sumV<<" "<<sumP<<endl;
    
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
// const int mx =2e5+123;
// ll a[mx];
int nod[1234];
int main() {
    optimize();
    int lim=1e3;
    vector<pair<int,int>>v;
    for(int i=1;i<=lim;i++){
        for(int j=i;j<=lim;j+=i){
            nod[j]++;
        }
    }
    for(int i=1;i<=lim;i++){
        v.push_back({nod[i],-1*i});
    }
    sort(v.begin(),v.end());
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        cout<<"Case " <<  i<<": "<<v[n-1].second * -1<<endl;
    }
    
}
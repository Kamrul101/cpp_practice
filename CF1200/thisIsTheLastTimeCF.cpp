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
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        multiset<pair<pair<int,int>,int>>ms;

        for(int i=0;i<n;i++){
            int x,y,w;
            cin>>x>>y>>w;
            ms.insert({{x,y},w});
        }
        for(auto u:ms){
            int x = u.first.first;
            int y = u.first.second;
            int w = u.second;
            if(k>=x && k<=y){
                k = max(k,w);
            }
        }
        cout<<k<<endl;


        
    }
    
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>v(n,-1);
        for(int i=1;i<n;i++){
            if(a[i]==a[i-1]) v[i] = v[i-1];
            else v[i]=i-1;
        }
        cin>>q;
        while(q--){
            int x,y;
            cin>>x>>y;
            x--;y--;
            if(v[y]<x){
                cout<<-1<<" "<<-1<<endl;
            }
            else cout<<v[y]+1<<" "<<y+1<<endl;
        }
        cout<<endl;
        
    }
    
}
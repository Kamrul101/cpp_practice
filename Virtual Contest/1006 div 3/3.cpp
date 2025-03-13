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
        int x = 0;
        for(int i=0;i<n;i++) x|=i;
        if(x==k){
            for(int i=0;i<n;i++){
                cout<<i<<" ";
            }
            cout<<endl;
            continue;
        }
        vector<int> v;
        x = 0;
        for(int i=0;i<n-1;i++){
            if((x|i|k)==k) v.push_back(i);
            else break;
        }
        while(v.size()!=n-1){
            v.push_back(0);
        }
        v.push_back(k);
        for(auto u:v){
            cout<<u<<" ";
        }
        cout<<endl;

        
    }
    
}
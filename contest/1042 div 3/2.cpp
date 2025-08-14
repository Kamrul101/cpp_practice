#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
// const int mx =13;
// int a[mx],b[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n,-1);
        if(n<=2){
            v[1] = 2;
        }
        else{
            for(int i=1;i<n;i+=2) v[i] = 3;
            if(n%2==0) v[n-1] = 2;
        }
        for(auto u:v) cout<<u<<" ";
        cout<<endl;
        
    }
    
}
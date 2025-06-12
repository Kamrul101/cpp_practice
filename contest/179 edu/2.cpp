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
        int n,m;
        cin>>n>>m;
        vector<int> fib(n+1);
        fib[1] = 1;
        fib[2] = 2;
        for(int i=3;i<=n;i++) fib[i] = fib[i-1] + fib[i-2];
        string s;
        for(int i=0;i<m;i++){
            vector<int> v(3);
            cin>>v[0]>>v[1]>>v[2];
            sort(v.begin(),v.end());
            if(v[0]>=fib[n] && v[1]>=fib[n] && v[2]>=(fib[n]+fib[n-1]) ){
                s+='1';
            }
            else s+='0';
        }
        cout<<s<<endl;
    }
    
}
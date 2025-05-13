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
        int x;
        vector<int> v(n);
        if(n == 1) v[0] = k;
        else{
            for(int i=0;i<31;i++){
                if(k&(1<<i)) x = i;
            }
            v[0] = ((1<<x)-1);
            v[1] = k-v[0];
            for(int i=2;i<n;i++) v[i] = 0;
        }
        for(int i=0;i<n;i++) cout<<v[i]<<" ";
        cout<<endl;
        
    }
    
}
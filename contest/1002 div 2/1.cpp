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
        int n;
        cin>>n;
        set<int> s1,s2;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            s1.insert(x);
        }
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            s2.insert(x);
        }
        if(s1.size()+s2.size()>3) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    
}
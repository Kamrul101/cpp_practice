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
        int zero = n-k;
        if(k==n){
            for(int i=0;i<k;i++) cout<<1;
            cout<<endl;
            continue;
        }
        if(k==0){
            for(int i=0;i<n;i++) cout<<0;
            cout<<endl;
            continue;
        }
        string s ="1";
        for(int i=1;i<zero;i++) s+='0';
        for(int i=1;i<k;i++) s+='1';
        s+='0';
        cout<<s<<endl;
        
    }
    
}
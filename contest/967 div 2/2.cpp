#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;

int main() {
    optimize();
    
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     if(n%2) cout<<-1<<endl;
     else{
        for(int i=n;i>n/2+1;i--) cout<<i<<" ";
        for(int i=1;i<=n/2+1;i++) cout<<i<<" ";
        cout<<endl;

     }
     
    } 
}
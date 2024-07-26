#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

// const int mx = 1e5+123;
// int a[mx];

int main() {
    optimize();
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a1=0,a2=0;
        int rem=0;
        rem=n%4;
        a1+= n/4;
        a2+=rem/2;
        cout<<a1+a2<<endl;
    }
    
   
    
}
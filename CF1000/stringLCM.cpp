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
     string s1,s2;
     cin>>s1>>s2;
     int n=s1.size();
     int m=s2.size();
     int x =  (n*m)/__gcd(n,m);
     string t1,t2;
     for(int i=1;i<=x/n;i++) t1+=s1;
     for(int i=1;i<=x/m;i++) t2+=s2;
     if(t1==t2) cout<<t1<<endl;
     else cout<<-1<<endl;
     
    }
}
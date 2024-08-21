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
    int n;
    cin>>n;
    if(n==0) cout<<1<<endl;
    
    else if(n%4==0) cout<<6<<endl;
    else if(n%4==1) cout<<8<<endl;
    else if(n%4==2) cout<<4<<endl;
    else if(n%4==3)  cout<<2<<endl;
    
}
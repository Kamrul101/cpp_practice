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
    int n,m;
    cin>>n>>m;
    int cnt =0;
    for(int i=0;i<=32;i++){
        int b = n - (i*i);
        if(b>=0 && (i + (b*b))==m) {cnt++;}
    }
    cout<<cnt<<endl;
}
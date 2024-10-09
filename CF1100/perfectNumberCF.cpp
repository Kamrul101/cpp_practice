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
bool check(int n){
    int ans = 0;
    while(n>0){
        ans+=n%10;
        n/=10;
    }
    if (ans==10) return true;
    else return false;
}
int main() {
    optimize();
    int n;
    vector<int> v;
    for(int i=10;i<=1e8;i++){
        if(check(i)) v.push_back(i);
    }
    cin>>n;
    cout<<v[n-1]<<endl;
    
}
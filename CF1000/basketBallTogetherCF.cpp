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
    ll n,d;
    cin>>n>>d;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.rbegin(),v.rend());
    int cnt = 0;
    int i=0,j=n-1;
    while(i<=j){
        int x= d/v[i];
        if(j-x>=i){
            cnt++;
            j = j-x;
        }
        i++;
    }
    cout<<cnt<<endl;
}
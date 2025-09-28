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

int query(int i, int j){
    cout<<"? "<<i<<" "<<j<<endl;
    cout<<flush;

    int x;
    cin>>x;
    cout<<flush;
    return x;
}

int main() {
    // optimize();
    int n;
    cin>>n;
    vector<int> v(n+1);
    
    int x = query(1,2);
    int y = query(2,3);
    int z = query(1,3);

    v[2] = (x+y-z)/2;
    v[1] = x - v[2];
    v[3] = y - v[2];

    for(int i=4;i<=n;i++){
        int val = query(i-1,i);
        v[i] = val - v[i-1];
    }
    cout<<"! ";
    for(int i=1;i<=n;i++) cout<<v[i]<<" ";

    cout<<endl;
    cout<<flush;
    
}
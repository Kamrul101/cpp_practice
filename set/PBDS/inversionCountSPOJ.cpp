#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
// const int mx =2e5+123;
// int a[mx];

template<typename T> using ordered_set = tree < T, null_type, 
    greater<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        ordered_set<ll> os;
        int n;
        cin>>n;
        ll ans =0;
        for(int i=0,x;i<n;i++){
            cin>>x;
            os.insert(x);
            ans+=os.order_of_key(x);
        }
        cout<<ans<<endl;
    } 
}
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


template<typename T> using ordered_set = tree < T, null_type, 
    less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

const int mx =2e5+123;
ll a[mx];
int main() {
    optimize();
    int n,k;
    cin>>n>>k;
    ordered_set<ll> os;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<k;i++) os.insert(a[i]);
    int x = (k+1)/2;
    for(int i=0;i<n-k+1;i++){
        cout<<*os.find_by_order(x-1)<<" ";
        os.erase(os.find_by_order(os.order_of_key(a[i])));
        if(i+k<n)os.insert(a[i+k]);
    }


    
}
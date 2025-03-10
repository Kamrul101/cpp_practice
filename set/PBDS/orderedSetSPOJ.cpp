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
    less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    optimize();
    int t;
    cin>>t;
    ordered_set<ll> os; 
    while(t--){
        char c;
        ll x;
        cin>>c>>x;
        if(c=='I') os.insert(x);
        else if(c=='D') os.erase(x);
        else if(c=='K'){
            x--;
            if(x>= os.size()) cout<<"invalid"<<endl;
            else cout<<*os.find_by_order(x)<<endl;
        }
        else if(c=='C') cout<<os.order_of_key(x)<<endl;
    }
}
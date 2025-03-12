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
// less_equal<T> all elements/ duplicate elements allowed
int main() {
    optimize();
    int t;
    cin>>t;
    ordered_set<long long> os;
    // set<pair<int,int>>s1;
    // map<int,int> mp;
    // int i=0;
    while(t--){
        char c;
        int x;
        cin>>c>>x;
        if(c=='!') os.insert(x);
        else{
            // finds less elements in left than x
            cout<<os.order_of_key(x)<<endl;

            // finds values in index
            cout<<*os.find_by_order(x)<<endl;
            //deletes all occurrences
            os.erase(x);
            // to remove only single value in duplicate
            os.erase(os.find_by_order(os.order_of_key(x)));
        }
    }
    
}
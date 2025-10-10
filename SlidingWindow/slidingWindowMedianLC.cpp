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
    less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const int mx = 2e5+123;
int nums[mx];

int main() {
    optimize();
    int n,k;
    cin>>n>>k;

    for(int i=0;i<n;i++) cin>>nums[i];

    ordered_set<pair<int,int>> os;
    for(int i = 0; i <k;i++) {
        os.insert({nums[i],i});
    }
    for (int i=0;i<n-k+1;i++) {
        int mid1 = (k-1)/2;
        int mid2 = k/2;
        if(k%2==1){
            int v1 = os.find_by_order(mid1)->first;
            cout<<v1<<" ";
        }
        else{
            double v1 = os.find_by_order(mid1)->first;
            double v2 = os.find_by_order(mid2)->first;
            cout<<(v1 + v2)/2<<" ";
        }
        if(i+k<n){
            os.insert({nums[i+k],i+k});
            os.erase({nums[i],i});
        }
    }

    
}
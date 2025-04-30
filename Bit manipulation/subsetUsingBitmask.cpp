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
vector<vector<int>> subsets(vector<int>& nums) {
    int n = nums.size();
    int subCnt = (1<<n);
    vector<vector<int>> subs;
    for(int mask=0;mask<subCnt;mask++){
        vector<int> sub;
        for(int i = 0;i<n;i++){
            if((mask & (1<<i))!=0){
                sub.push_back(nums[i]);
            }
        }
        subs.push_back(sub);
    }
    return subs;
}
void printBinary(int n){
    for(int i=10;i>=0;i--){
        cout<<((n>>i)&1);
    }
    cout<<endl;
}
int main() {
    optimize();

    // int n;
    // n=13;
    // for(int i = 0; i < 30; i++) {
    //     if((n & (1 << i)) != 0) cout << i << " ";
    // }
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &u:v) cin>>u;

    auto res = subsets(v);
    for(auto u: res){
        cout<<"[ ";
        for(int i=0;i<u.size();i++){
            cout<<u[i]<<(i==u.size()-1?"":",");
        }
        cout<<" ]"<<endl;
    }


    
    
    
}
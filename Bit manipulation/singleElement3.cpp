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

vector<int> singleNumber(vector<int>& nums) {
    int XOR = 0;
    for(auto u:nums) XOR^=u;
    int rightMostBit = (XOR & (XOR-1)) ^ XOR;
    int res1=0, res2=0;
    for(auto u:nums){
        if(u&rightMostBit) res1^=u;
        else res2^=u;
    }
    return {res1,res2}; 
}
void printBinary(int n){
    for(int i=10;i>=0;i--){
        cout<<((n>>i)&1);
    }
    cout<<endl;
}
int main() {
    optimize();
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &u:v) cin>>u;

    auto ans=singleNumber(v);
    cout<<ans[0]<<" "<<ans[1]<<endl;

    
}
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

int singleNumber(vector<int>& nums) {
    int res = 0, n = nums.size(),cnt;
    for(int i=0;i<32;i++){
        cnt = 0;
        for(int j=0;j<n;j++){
            // if(nums[j]&(1<<i)) cnt++;
            cnt+=((nums[j]>>i)&1);
        }
        // if(cnt%3!=0) res+=(1<<i);
        if(cnt%3!=0) res|=(1<<i);
    }
    return res; 
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

    int ans=singleNumber(v);
    cout<<ans<<endl;

    
}
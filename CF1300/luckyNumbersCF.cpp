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

vector<ll> generateLuckyNumbers() {
    vector<ll> lucky;
    for (int len = 2; len <= 10; len+=2) {
        int total = 1 << len;
        int x = len/2;
        for (int mask = 0;mask<total; mask++) {
            int n = __builtin_popcount(mask);
            if(n!=x) continue;
            ll num = 0;
            for(int i = 0;i<len;i++){
                num = num * 10 + ( (mask&(1<<i)) ? 7 : 4 );
            }
            lucky.push_back(num);
        }
    }
    sort(lucky.begin(), lucky.end());
    return lucky;
}
int main() {
    optimize();
    int n;
    cin>>n;
    auto a = generateLuckyNumbers();
    for(auto u:a){
        if(u>=n){
            cout<<u<<endl;
            break;
        }
    }
    
}
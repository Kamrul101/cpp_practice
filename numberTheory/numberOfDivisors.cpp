#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx = 2e5+123;
int cnt[mx]={0};
vector<int> v[mx]; //vector of array
int main() {
    optimize();
    int n=10;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j+=i){
            cnt[j]++;
            v[j].push_back(i); // store divisors
        }
    }
    // print stored divisors
    for(int i=1;i<=n;i++){
        for(auto u:v[i] ){
            cout<<u<<" ";
        }
        cout<<endl;
    }
     
    
}
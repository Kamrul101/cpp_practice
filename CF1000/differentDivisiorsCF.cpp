#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int n = 300000;
bitset<n> isPrime;
vector<int> primes;
void sieve(){
    for(int i = 3;i<=n;i+=2) isPrime[i] = 1;
    int sq = sqrt(n);
    for(int i=3;i<=sq;i+=2){
        if(isPrime[i]){
            for(int j=i*i;j<=n;j+=i){
                isPrime[j]=0;
            }
        }
    }
    isPrime[2]=1;
    primes.push_back(2);
    
    for(int i=3;i<=n;i+=2){
        if(isPrime[i]==1) {
            primes.push_back(i);
        }
    }
}
int main() {
    optimize();
    sieve();
    int t;
    cin>>t;
    while(t--){
          int d;
          cin>>d;
          int x = *upper_bound(primes.begin(),primes.end(),d);
          int y = *upper_bound(primes.begin(),primes.end(),x+d-1);
          cout<<1LL * x *  y<<endl;
    }
    
    
     
    
}
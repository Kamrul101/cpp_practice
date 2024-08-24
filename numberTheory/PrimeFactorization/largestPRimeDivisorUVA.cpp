#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

const int mx = 1e7+123;

bitset<mx> isPrime;
vector<int> primes;

void primeGen(int n){
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

vector<ll> primeFactors(ll n){
    vector<ll> factors;
    for(auto p: primes){
        if(1LL* p*p >n) break;
        if(n%p==0){
            factors.push_back(p);
            while(n%p==0){
                n/=p;
            }
        }
    }
    if(n>1) factors.push_back(n);
    return factors;
}

int main() {
    optimize();
    int lim=1e7;
    primeGen(lim);
    ll n;
    while(cin>>n){
        if(n==0) break;
        if(n<0) n*=-1;
        vector<ll> factors = primeFactors(n);
        if(factors.size()<=1) cout<<-1<<endl;
        else{
            cout<<factors[factors.size()-1]<<endl;
        }
    }
    
    
}
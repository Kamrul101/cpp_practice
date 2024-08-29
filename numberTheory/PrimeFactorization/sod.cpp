#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

const int mx = 1e8+123;

bitset<mx> isPrime;
vector<int> primes;

void sieve(ll n){
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

ll sod(ll n){
    ll sod =1;
    for(auto p: primes){
        if(1LL * p*p >n) break;
        if(n%p==0){
            ll sum =1;
            ll a = 1;
            while(n%p==0){
                a*=p;
                sum+=a;
                n/=p;
                 
            }
            
            sod*=sum;
        }
    }
    if(n>1) sod*=(n+1);
    return sod;
}

int main() {
    optimize();
    ll lim=1e8;
    sieve(lim);

    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        cout<<sod(n)-n<<endl;
    }
}
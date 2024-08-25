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

void sieve(int n){
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

int NOD(ll n){
    int nod=1;
    for(auto p: primes){
        if(1LL * p*p >n) break;
        if(n%p==0){
            int cnt=0;
            while(n%p==0){
                n/=p;
                cnt++; 
            }
            cnt++;
            nod*=cnt;
        }
    }
    if(n>1) nod*=2;
    return nod;
}

int main() {
    optimize();
    int lim=1e6;
    sieve(lim);

    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        cout<<NOD(n)<<endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

const int mx = 1e7;

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
    // isPrime[2]=1;
    // primes.push_back(2);
    for(int i=3;i<=n;i+=2){
        if(isPrime[i]==1) {
            primes.push_back(i);
        }
    }
}
int main() {
    optimize();
    int l=1e6;
    primeGen(l);
    
    int n;
    while(cin>>n){
        if(n==0) break;
        bool ans = false;
        for(auto p:primes){
            if(p>n) break;
            int a = p;
            int b=n-a;
            if(isPrime[b]){
                cout<<n<<" = "<<a<<" + "  <<b<<endl;
                ans = true;
                break;
            }
        } 
        if(!ans) cout<<"Goldbach's conjecture is wrong."<<endl;
    }
}
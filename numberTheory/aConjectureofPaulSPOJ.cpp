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
int cntPrime[mx];



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
int main() {
    optimize();
    int lim=1e7;
    primeGen(lim);
    
    
    int limX= 3200;
    int limY= 60;
    int cnt = 0;
    for(int x = 1;x<=limX;x++){
        for(int y= 1;y<=limY;y++){
            int val = (x*x) + (y*y*y*y);
            if(val<=lim && isPrime[val] ){
                cntPrime[val] = 1;
            }
        }
    }
    for(int i=1;i<=lim;i++) {cntPrime[i]+=cntPrime[i-1];}
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<cntPrime[n]<<endl;
    }
    return 0;
   
    
}
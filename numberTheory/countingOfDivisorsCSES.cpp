#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx = 1e6+123;
int cnt[mx]={0};

const int lim = 1e6;
int main() {
    optimize();
    for(int i=1;i<=lim;i++){
        for(int j =i;j<=lim;j+=i){
            cnt[j]++;
        }
    }
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        cout<<cnt[x]<<endl;
    }
     
    
}
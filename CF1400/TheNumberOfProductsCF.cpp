#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
int a[mx];
int main() {
    optimize();
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    int cntP=1,cntN=0,cur=1;
    ll neg = 0;
    for(int i=0;i<n;i++){
        if(a[i]<0) cur*=-1;
        if(cur>0) cntP++;
        else cntN++;
    }
    cout<<cntP<<" "<<cntN<<endl;
    // neg = 1LL * cntP * cntN;
    // ll pos = (1LL*n*(n+1)/2) - neg;
    // cout<<neg<<" "<<pos<<endl;
    
    
}
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e6+123;
// long long a[mx];

int main() {
    optimize();
    int n,k,i;
    cin>>n>>k;
    int remMin = 240 - k;
    int maxMin=0;
    for(i=1;i<=n;i++){
       maxMin+=5*i;
        if(maxMin>remMin) {
            break;
        }

    }
    
    cout<<i-1<<endl;
    
}

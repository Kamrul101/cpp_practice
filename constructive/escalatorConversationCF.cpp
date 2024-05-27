#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
const int mx = 2e5+123;
int a[mx];


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,m,k,h;
        cin>>n>>m>>k>>h;
        for(int i=0;i<n;i++) cin>>a[i];
        int cnt=0;
        for(int i=0;i<n;i++){
            if(h!=a[i] && abs(h-a[i])%k==0 && abs(h-a[i])<=(m-1)*k  ) cnt++;
        }
        cout<<cnt<<endl;

    }
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
int a[mx],b[mx];
int main() {
    optimize();
    int n;
    cin>>n;
    for(int i=0;i<n;i++){ 
        cin>>a[i];
    }
    int cnt=0, mn=INT_MAX,mnI;
    for(int i=0;i<n;i++){
        if(a[i]<mn){
            mn = a[i];
            mnI = i+1;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]==mn){
            cnt++;
        }
    }
    if(cnt>1) cout<<"Still Rozdil"<<endl;
    else cout<<mnI<<endl;
    
}
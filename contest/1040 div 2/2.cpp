#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =52;
int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int total = 0;
        int cnt0 = 0,cnt1=0,cnt2=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            total+=a[i];
            if(a[i]==0) cnt0++;
            if(a[i]==1) cnt1++;
            if(a[i]==2) cnt2++;
        }
        if(total>k){
            for(int i=0;i<n;i++) cout<<a[i]<<" ";
            cout<<endl;
            continue;
        }
        bool c = true;
        if(total+1==k){
            for(int i=0;i<cnt0;i++) cout<<0<<" ";
            for(int i=0;i<cnt2;i++) cout<<2<<" ";
            for(int i=0;i<cnt1;i++) cout<<1<<" ";
            cout<<endl;
            continue;
        }
        cout<<-1<<endl;
        
    }
    
}
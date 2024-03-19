#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
const int mx = 2e6+123;
long long a[mx];

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,sum=0;
        bool test = false;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            if(a[i]%3==1) test=true;
        }
        if(sum%3==0 ) cout<<0<<endl;
        else if(sum%3 == 2) cout<<1<<endl;
        else{
            if(test) cout<<1<<endl;
            else cout<<2<<endl;
        }
    }
    
    
}
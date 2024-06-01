#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
const int mx = 2e5+123;
int a[mx];



int main() {
    optimize();
    
   
        int n, cmx=0 , cmn=0,mx=-1,mn=INT_MAX;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mx = max(mx,a[i]);
            mn = min(mn,a[i]);
        }
        for(int i=0;i<n;i++){
            if(a[i]==mx) cmx++;
            if(a[i]==mn) cmn++;
        }
        if(mx==mn) cout<<0<<endl;
        else{
            cout<<(n-cmx-cmn)<<endl;
        }
        

   
}

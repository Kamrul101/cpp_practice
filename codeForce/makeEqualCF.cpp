#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx = 2e6+123;
long long a[mx];

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,sum=0,eq,q=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        
        eq = sum/n;
        
        
        for(int i=0;i<n;i++){
            if((q+= (a[i] - eq))<0){
                break;
            }
            
           
        }
        if(q<0) cout<<"NO\n";
        else cout<<"YES\n";
    }
    
}
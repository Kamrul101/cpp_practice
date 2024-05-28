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
        int n;
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        if(a[0]!=a[n-1]){
            cout<<"YES"<<endl;
            cout<<a[0]<<" "<<a[n-1]<<" ";
            for(int i=1;i<n-1;i++) cout<<a[i]<<" ";
            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}

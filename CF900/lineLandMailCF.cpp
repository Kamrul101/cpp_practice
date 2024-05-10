#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
const int mx = 2e5+123;
int a[mx];


int main() {
    optimize();
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<abs(a[0]-a[1])<<" "<<abs(a[0]-a[n-1])<<endl;
    for(int i=1;i<n-1;i++){
        int mx,mn;
        mn=min(abs(a[i]-a[i-1]), abs(a[i]-a[i+1]));
        mx=max(abs(a[i]-a[0]), abs(a[i]-a[n-1]));
        cout<<mn<<" "<<mx<<endl;
    }
    cout<<abs(a[n-1]-a[n-2])<<" "<<abs(a[n-1]-a[0])<<endl;
        
    
}

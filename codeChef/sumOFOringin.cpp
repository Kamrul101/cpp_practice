#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
typedef long long ll ;
// const int mx = 2e5+123;
// long long a[mx];

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        ll s2 = n%9;
        ll s1 = n/9;


        ll totalSum = 45*s1;

        for(int i=1;i<=s2;i++){
            totalSum+=i;
        }
        cout<<totalSum<<endl;
    }
    
    
}
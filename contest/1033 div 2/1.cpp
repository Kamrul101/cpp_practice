#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
// const int mx =2e5+123;
// int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int l1,b1,l2,b2,l3,b3;
        cin>>l1>>b1>>l2>>b2>>l3>>b3;

        if(l1==l2 && l1==l3 && (b1+b2+b3)==l1){
            cout<<"YES"<<endl;
            continue;
        }
        if(b1==b2 && b1==b3 && (l1+l2+l3)==b1 ){
            cout<<"YES"<<endl;
            continue;
        }
        if(l1+l2==b1 && l1+l3==b1 && b1==(b2+b3)){
            cout<<"YES"<<endl;
            continue;
        }
        if(b1+b2==l1 && b1+b3==l1 && l1==(l2+l3)){
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
        
    }
    
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int> s1,s2;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int diff = a[2] - a[1];
        bool  check = true;
        for(int i=3;i<=n;i++){
            if(a[i]-a[i-1]!=diff){
                cout<<"NO"<<endl;
                check = false;
                break;
            }
        }
        if(!check) continue;
        int a1 = a[1];
        int x = n+1,val = a[1]+diff*n;

        if(a[1]-diff>=0 && val>=0 && (a[1]-diff)%x==0){
            cout<<"YES"<<endl;
        } 
        else cout<<"NO"<<endl;
    }
    
}
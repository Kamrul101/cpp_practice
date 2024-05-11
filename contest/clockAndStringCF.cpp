#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// ll a[mx];


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        bool a1 = false, a2= false;
        int mx = max(a,b);
        int mn = min(a,b);
        for(int i=mn; i<=mx;i++){
            if(c==i) a1= true;
            if(d==i) a2 = true;
        }
        if((a1 && a2)|| (!a1 && !a2)) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        
    }
    
}

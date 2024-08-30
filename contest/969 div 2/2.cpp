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
        int n,m,mx=-1;
        cin>>n>>m;
        vector<int> v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
            mx = max(mx,x);
        }
        while(m--){
            int l,r;
            char c;
            cin>>c;
            cin>>l>>r;


            if(mx>=l && mx<=r){
                if(c=='+') mx++;
                else mx--;
            }
            cout<<mx<<" ";
        }
        cout<<endl;
        
        

    }
    
}
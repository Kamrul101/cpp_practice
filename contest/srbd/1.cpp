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
vector<string>c = {"2310","2310","2310","1310","3310"};
bool check(vector<string>&v){
    for(int i=0;i<v.size();i++){
        if(v[i]!=c[i]) return false;
    }
    return true;
}
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool f = true;
        for(int k=1;k<=n;k++){
            vector<string>v;
            for(int i=1;i<=5;i++){
                int m,q,r;
                cin>>m>>q>>r;
                string s;
                s+=to_string(m);
                s+=to_string(q);
                s+=to_string(r);
                v.push_back(s);
            }
            bool ans =  check(v);
            if(!ans) f = false;
        }
        if(f) cout<<"Consistent"<<endl;
        else cout<<"Inconsistent"<<endl;
        
    }
    
}
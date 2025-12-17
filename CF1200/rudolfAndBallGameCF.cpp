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
        int n,m,x;
        cin>>n>>m>>x;

        vector<vector<int>>v;
        for(int i=1;i<=m;i++){
            int dist;
            char c;
            cin>>dist>>c;
            if(v.empty()){
                set<int> s;
                if(c=='?'){
                    int cl1 = x + dist;
                    if(cl1>n) cl1%=n;
                    int cl2 = (x-dist);
                    if(cl2<=0) cl2=n + cl2;
                    // cout<<cl1<<" "<<cl2<<endl;
                    s.insert(cl1);
                    s.insert(cl2);
                }
                else if(c=='0'){
                    int cl1 = x + dist;
                    if(cl1>n) cl1%=n;
                    s.insert(cl1);
                    // cout<<cl1<<endl;
                }
                else{
                    int cl2 = (x-dist);
                    if(cl2<=0) cl2=n + cl2;
                    s.insert(cl2);
                    // cout<<cl2<<endl;
                }
                vector<int> v2;
                for(auto u:s){
                    v2.push_back(u);
                }
                v.push_back(v2);
            }
            else{
                // vector<int> v1 = v.back();
                set<int> s;
                for(auto u:v.back()){
                    if(c=='?'){
                        int cl1 = u + dist;
                        if(cl1>n) cl1%=n;
                        int cl2 = (u-dist);
                        if(cl2<=0) cl2=n + cl2;
                        s.insert(cl1);
                        s.insert(cl2);
                        // cout<<cl1<<" "<<cl2<<endl;
                    }
                    else if(c=='0'){
                        int cl1 = u + dist;
                        if(cl1>n) cl1%=n;
                        s.insert(cl1);
                        // cout<<cl1<<endl;
                    }
                    else{
                        int cl2 = (u-dist);
                        if(cl2<=0) cl2=n + cl2;
                        s.insert(cl2);
                        // cout<<cl2<<endl;
                    }
                }
                vector<int> v2;
                for(auto u:s){
                    v2.push_back(u);
                }
                v.push_back(v2);
                
            }
        }
        cout<<v.back().size()<<endl;
        for(auto u:v.back()) cout<<u<<" ";
        cout<<endl;
        // for(auto u:v){
        //     for(auto x:u) cout<<x<<" ";
        //     cout<<endl;
        // }
        
    }
    
}
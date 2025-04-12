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
        vector<int>v;
        for(int i=0;i<n;i++) {
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        queue<int> q;
        for(int i=0;i<v.size();i++){
            q.push(v[i]);
        }
        
        while(!q.empty()){
            if(q.size()==1) break;
            int x = q.front();
            q.pop();
            int y = q.front();
            q.pop();
            q.push(x+y-1);

        }
        cout<<q.front()<<endl;
    }
    
}
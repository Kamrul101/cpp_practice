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
     vector<int> mp(30, 0); 
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x==1) mp[y]++;
        else{
            int val=y;
            bool check = false;
            for(int i=29;i>=0;i--){
                int take = min(mp[i],val/(1<<i));
                val-= (take<<i);
            }
            cout<<(val==0?"YES":"NO")<<endl;
        }
        
    }
    
}
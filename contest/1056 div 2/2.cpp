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
        int n,k;
        cin>>n>>k;

        int tot = n*n;
        int val = k;
        if((tot-k)==1) cout<<"NO"<<endl;
        else{
            vector<string> v;
            for(int i=0;i<n;i++){
                string t;
                for(int j=0;val>0 && j<n;j++){
                    t+='U';
                    val--;
                }
                if(t.size()!=n){
                    if(t.size()+1==n)t.push_back('D');
                    else{
                        t.push_back('R');
                        while(t.size()!=n) t.push_back('L');
                    }
                }
                v.push_back(t);
            }
            
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                cout<<v[i]<<endl;
            }
            
        }
        
    }
    
}
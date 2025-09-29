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
    // optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n+1), vis(n+1,0);
        int sum = 0;
        for(int i=1;i<=n;i++){
            cin>>v[i];
            vis[v[i]] = 1;
            
        }
        for(int i=1;i<=n;i++){
            sum+=vis[i];
        }


        if(sum==n){
            int l = 0, r=0;
            for(int i=1;i<=n;i++){
                if(v[i]==1) l = i;
                if(v[i]==n) r = i;
            }
            cout<<"? "<<l<<" "<<r<<endl;
            
            int val1,val2;
            cin>>val1;
            
            cout<<"? "<<r<<" "<<l<<endl;

            cin>>val2;
            
            if(val1!=0 && val2!=0 && val1==val2 && val1>=n-1){
                cout<<"! B"<<endl;
            } 
            else cout<<"! A"<<endl;
        }
        else{
            for(int i=1;i<=n;i++){
                if(!vis[i]){
                    cout<<"? "<<i<<" "<<(i%n)+1 <<endl;

                    int val;
                    cin>>val;

                    if(val==0){
                        cout<<"! A"<<endl;
                    }
                    else cout<<"! B"<<endl;

                    break;
                }
            }
        }
        cout<<flush;
        
    }
    
}
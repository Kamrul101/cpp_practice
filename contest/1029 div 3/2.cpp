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
        int n;
        cin>>n;
        vector<int> v(n+2);
        if(n&1){
            int x = (n+1)/2;
            v[1] = 2;
            v[n] = 1;
            v[x] = n;
            int a = 3,b=n-1;
            bool check = false;
            
            for(int i=2;i<n;i++){
                if(i==x) continue;
                if(!check){
                    v[i] = a; 
                    a++;
                    check = true;
                }
                else{
                    v[i] = b;
                    b--;
                    check = false;
                }
                
            }
            for(int i=1;i<=n;i++) cout<<v[i]<<" ";
        }
        else{
            // int x = (n+1)/2;
            v[1] = 2;
            v[n] = 1;
            // v[x] = n;
            int a = 3,b=n;
            for(int i=2;i<n-1;i++){
                // if(i==x) continue;
                v[i] = a;
                v[i+1] = b;
                a++;
                b--;
                i++;
            }
            for(int i=1;i<=n;i++) cout<<v[i]<<" ";
        }
        cout<<endl;
        
    }
    
}
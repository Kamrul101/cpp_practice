#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
// const int mx =2e5+123;
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==2) cout<<-1<<endl;
        else{
            vector<int>a,b;
            
            int cnt=1;
            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                    if(cnt%2) a.push_back(cnt);
                    else b.push_back(cnt);
                    cnt++;
                }
            }
            int j=0;
            for(int i=0;i<a.size();i++){
                cout<<a[i]<<" ";
                j++;
                if(j%n==0) cout<<endl;
            }
            for(int i=0;i<b.size();i++){
                cout<<b[i]<<" ";
                j++;
                if(j%n==0) cout<<endl;
            }
            
            
            
        }
    }
    
}
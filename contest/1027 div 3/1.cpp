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
        string s;
        cin>>s;
        string temp;
        int n = stoi(s);
        bool ans = false;
        for(int i=0;i<=200;i++){
            for(int j=0;j<=200;j++){
                if(((i+j)*(i+j))==n){
                    cout<<i<<" "<<j<<endl;
                    ans = true;
                    break;
                }
            }
            if(ans) break;
        }
        if(!ans) cout<<-1<<endl;
        
    }
    
}
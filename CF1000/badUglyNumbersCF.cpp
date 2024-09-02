#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )






int main() {
    optimize();
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1) cout<<-1<<endl;
        else{

            string s="2";
            for(int i=2;i<=n;i++){
                if(i%2==0) s+="3";
                else s+="9";
            }
            cout<<s<<endl;
        }
    }
    
}
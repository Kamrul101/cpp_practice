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
        ll n;
        cin>>n;

        string s;

        bool check = false;
        for(int i=39;i>=0;i--){
            if((n>>i) & 1){
                s+='1';
            }
            else{
                s+='0';
            }
        }
        bool ans = false;

        if(__builtin_popcount(n) & 1){
            cout<<"NO"<<endl;
            continue;
        }
        
        reverse(s.begin(),s.end());
        while(s.back()=='0') s.pop_back();
        while(s.size()<64){
            int x = s.size();
            bool check = true;
            for(int i=0,j=x-1;i<=j;i++,j--){
                if(s[i]!=s[j]){
                    check = false;
                    break;
                }
            }
            if(!check){
                s+='0';
            }
            else {
                ans = true;
                break;
            }

        }
        cout<<(ans?"YES":"NO")<<endl;
    }
    
}
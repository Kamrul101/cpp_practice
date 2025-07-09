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
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        if(a>b){
            if((a^1)==b) cout<<y<<endl;
            else cout<<-1<<endl;
            continue;
        }
        if(x<=y){
            cout<<x*(b-a)<<endl;
            continue;
        }
        int cost = 0;
        while(a!=b){
            if(a%2==0){
                a++;
                cost+=y;
            }
            else{
                a++;
                cost+=x;
            }
        }
        cout<<cost<<endl;
    }
    
}
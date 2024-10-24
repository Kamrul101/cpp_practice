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
        int turn=1;
        int i=1,t=0;
        while(1){
            if(i%2){
                t-=(2*i-1);
            }
            else{
                t+=(2*i-1);
            }
            i++;
            if(t<=-n || t>=n){
                if(i%2){
                    cout<<"Sakurako"<<endl;
                    break;
                }
                else{
                    cout<<"Kosuke"<<endl;
                    break;
                }
                
            }
        }
        
    }
    
}
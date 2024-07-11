#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

const int mx = 1e5+123;
// int a[mx];

int main() {
    optimize();
    
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int mx = -1;

        for(int i=0;i<=5;i++){
            for(int j=0;j<=5-i;j++){
                int k = 5 -i -j;
                mx = max(mx,((a+i)*(b+j)*(c+k)));
            }
        }
        cout<<mx<<endl;

    }
    
   
    
}
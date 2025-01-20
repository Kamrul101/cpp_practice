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
        int a,b,c,d,e;
        cin>>a>>b>>d>>e;
        int mx = 0;
        for(int i=-101;i<102;i++){
            int x = 0;
            if(a+b==i) x++;
            if(b+i==d) x++;
            if(i+d==e) x++;
            mx = max(mx,x);
        }
        cout<<mx<<endl;
    }
    
}
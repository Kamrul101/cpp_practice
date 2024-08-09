#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

// const int mx = 1e5+123;
// int a[mx];
void test(int n,int k){
        int diag = 0,cnt=0;
        bool ans = false;
        if(k<=0){
            cout<<0<<endl;
            return;
        }
        if(k<=n){
            cout<<1<<endl;
            return;
        }
        cnt++;
        k-=n;
        for(int i=n-1;i>0;i--){
            k-=i;
            cnt++;
            if(k<=0){
                cout<<cnt<<endl;
                return;
            }
            k-=i;
            cnt++;
            if(k<=0){
                cout<<cnt<<endl;
                return;
            }
        }
        cout<<cnt<<endl;
}

int main() {
    optimize();
    
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        test(n,k);
        

    }
    
   
    
}
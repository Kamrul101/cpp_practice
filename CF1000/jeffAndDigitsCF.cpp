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
    int n;
    cin>>n;
    int cnt0=0,cnt5=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==5) cnt5++;
        else cnt0++;
    }
    string mx,temp;
    if(cnt0==0) cout<<-1<<endl;
    else if(cnt5<9) cout<<0<<endl;
    else{
        cnt5/=9;
        cnt5*=9;
        for(int i=1;i<=cnt5;i++){
            mx+='5';
        }
        for(int i=1;i<=cnt0;i++){
            mx+='0';
        }
        cout<<mx<<endl;
    }
}
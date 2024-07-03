#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )


const int mx = 2e5+123;
int a[mx];

int main() {
    optimize();
    int n,d;
    cin>>n>>d;
    int joke = 0,time=0;
    for(int i=0;i<n;i++){
            cin>>a[i];
            time+=a[i];
    }
   
    int totalTime=((n-1)*10) + time;
    if(d<totalTime) cout<<-1<<endl;
    else {
        joke = (d-time)/5;
        cout<<joke<<endl;
    }
}
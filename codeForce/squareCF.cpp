#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e6+123;
// long long a[mx];

int main() {
    optimize();
    int t;
    cin>>t;
    while (t--)
    {
        int max=-10001,min=100001;
        for(int i=0;i<4;i++){
            int a,b;
            cin>>a>>b;
            if(a>max) max=a;
            if(a<min) min=a;
        }
        int sq = max - min;
        cout<<sq*sq<<endl;
    }
    
}

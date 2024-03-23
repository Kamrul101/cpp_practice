#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e6+123;
// long long a[mx];

int main() {
    optimize();
    int k,r,i=1;
    cin>>k>>r;
    while(true){
        if((k*i)%10==0)
        {
            break;
        }
        if((k*i)%10==r)
        {
            break;
        }
        i++;
    }
    cout<<i<<endl;
    
}

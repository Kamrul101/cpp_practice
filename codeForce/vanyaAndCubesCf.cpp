#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];
// int preSum[mx];



int main() {
    optimize();
    int n;
    cin>>n;
    int i,cnt=0;
        int sum=0;
    for( i=1;i<=n;i++){
       sum+=(i*(i+1))/2;
       if(sum<=n) cnt++;
       else break;

    }
    cout<<cnt<<endl;
    
}

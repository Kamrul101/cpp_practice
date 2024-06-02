#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];
int sum(int n){
    if(n==0) return 0;
    else return sum(n-1)+n;
}

int main() {
    optimize();
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
    
}

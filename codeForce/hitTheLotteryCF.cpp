#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e6+123;
// long long a[mx];

int main() {
    optimize();
    int n,count=0;
    cin>>n;
    count = (n/100)+(n%100)/20+(n%20)/10+(n%10)/5+(n%5);
    cout<<count<<endl;
}
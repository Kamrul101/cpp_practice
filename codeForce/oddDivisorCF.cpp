#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];


int main() {
    optimize();
    int n;
    cin>>n;
    while(n--){
        long long a;
        
        cin>>a;
        while(a%2==0){
            a/=2;
        }
        cout<<(a%2==1 && a>1? "YES" : "NO")<<endl;
        
    }
}
// int main() {
//     optimize();
//     int n;
//     cin>>n;
//     while(n--){
//         long long a;
//         bool f = false;
//         cin>>a;
//         if(a&a-1) cout<<"YES"<<endl;
//         else cout<<"NO"<<endl;
//     }
// }
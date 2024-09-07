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
    int sum=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        sum+=x;
    }
    n++;
    int num=0;
    for(int i=1;i<=5;i++){
        if((sum+i)%n != 1) num++;
    }
    cout<<num<<endl;
    
}
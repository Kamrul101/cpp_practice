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

void printBinary(int n){
    for(int i=10;i>=0;i--){
        cout<<((n>>i)&1);
    }
    cout<<endl;
}
int main() {
    optimize();

    int n;
    // cin>>n;
    n=59;

    //multiply by 2
    cout<<(n<<1)<<endl;

    //divide by 2
    cout<<(n>>1)<<endl;

    printBinary(n);
    int i = 3;
    //Clear LSB
    int clearLSB = (n & (~((1<<i+1)-1)));
    printBinary(clearLSB);
    
    //Clear MSB
    int clearMSB = (n & (((1<<i+1)-1)));
    printBinary(clearMSB);
    
    
    
}
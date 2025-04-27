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
    n=13;

    // for(int i=0;i<5;i++) {
    //     n=n>>1;
    //     cout<<n<<endl;
    // }
    // cout<<(n>>1);
    cout<<"Number's Binary: ";
    printBinary(n);

    //check set/unset bit
    int i=3;
    if((n&(1<<i))!=0){
        cout<<"Bit is set"<<endl;
        // cout<<(n&(1<<i))<<endl;
    }
    else cout<<"Bit is not set"<<endl;
    
    /*
    set bit
        set 4th bit
        00000001101 ->n
    or  00000010000 ->(1<<4)
    ----------------
        00000011101
    */
    cout<<"After set bit:   ";
    printBinary( n | (1<<4));
    
    /*
    unset bit
         unset 3rd bit
         00000001101 ->n
    and  11111110111 ->(~(1<<3)) ~inverts all bits
    -------------
         00000000101
    */
    cout<<"After unset bit: ";
    printBinary( n & (~(1<<3)));

    //count bits
    int cnt=0;
    for(int i=30;i>=0;i--){
        if((n&(1<<i))!=0) cnt++;
    }
    cout<<"Bit count: "<<cnt<<endl;
    
    
}
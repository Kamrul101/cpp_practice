#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
const int mx = 5e5 + 123;
void TOH(int n, int a,int b, int c){
    if(n>0){
        TOH(n-1,a,c,b);
        cout<<"FROM "<<a<<" TO "<<c<<endl;
        TOH(n-1,b,a,c);
    }
}

int main()
{
    optimize();
    TOH(3,1,2,3);

}

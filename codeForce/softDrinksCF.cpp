#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e6+123;
// long long a[mx];

int main() {
    optimize();
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int maxToast = (k*l)/nl;
    int lemonSlice = c*d;
    int salt = p/np;

    cout<<(min(min(maxToast,lemonSlice),salt))/n<<endl;
    
    
}
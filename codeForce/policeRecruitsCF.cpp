#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
const int mx = 2e6+123;
long long a[mx];

int main() {
    optimize();
    int n,police=0,crime=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(police == 0 && a== -1){
            crime++;
        }
        else if(police>0 && a==-1 ) {
            police--;
        }
        else{
            police+=a;
        }
    }
    cout<<crime<<endl;
    
}
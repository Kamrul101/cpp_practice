#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];


int main() {
    optimize();
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int a,b,c;
        
            int d=n/3;
            if(n==d*3){
                a=d+1;
                b=d;
                c=d-1;
            }
            else{
                if(n%3==2){
                    a=d+2;
                    b=d+1;
                    c=d-1;
                }
                else{
                    if(d>2){
                        a=d+2;
                        b=d+1;
                        c=d-2;
                    }
                    else{
                        a=d+2;
                        b=d;
                        c=d-1;
                    }
                }
                

            }
        cout<<b<<" "<<a<<" "<<c<<endl;
        
    }
    
}

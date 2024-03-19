#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e6+123;
// long long a[mx];

int main() {
    optimize();
    int n;
    cin>>n;
    while(n--){
        long long a,b,c,tent=0;
        cin>>a>>b>>c;
        tent+=a;
        long long remB=0; 
        remB+=b%3;
        tent+=b/3;
        if(remB>0){
            if((remB+c)%3==0){
                tent+=(remB+c)/3;
                cout<<tent<<endl;
            }
            else if((remB+c)>3){
                tent+=(remB+c)/3;
                cout<<tent+1<<endl;
            }
            else cout<<-1<<endl;
        }
        else{
            if(c%3==0){
                tent+=c/3;
                cout<<tent<<endl;
            }
            else{
                
                tent+=c/3;
                cout<<tent+1<<endl;
            }
        }
    }

}
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        if(a%b == 0){
            cout<<0<<endl;
        }
        else{
            
            cout<<b-(a%b)<<endl;
        }
    }
    
    
}
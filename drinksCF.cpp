#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    int t;
    double s,sum;
    cin>>t;
    
    
    for(int i=1; i<=t;i++){
        cin>>s;
        sum+=s;
        
    }
    cout<<setprecision(14)<<sum/t<<endl; 
}
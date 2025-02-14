#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    int i,n,sum = 0,t=2,p,x;
    int a[101]={0};
    cin>>n;
    
    while(t--){
    cin>>p;

    for( i=0;i<p;i++){
        
        cin>>x;
        a[x]=1;
    }
    }
    
    for( i=0;i<=n;i++){
        sum+=a[i];
        
    }
    
    if(sum == n) cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!" <<endl;
}

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    int n,h;
    cin>>n>>h;
    int w=0;
    
    int i,a;
    for(i=0; i<n;i++){
        cin>>a;
        if(a%h==0){
            w += a/h;
        }
        else w += a/h + 1;
        
    }
    cout<<w<<endl;  
}
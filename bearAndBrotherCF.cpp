#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    int a,b;
    cin>>a>>b;
    int i=0;
    
    while(a<=b){
        a=a*3;
        b=b*2;
        i++;
    }
    cout<<i<<endl;
    
}
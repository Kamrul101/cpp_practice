#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    int a;
    cin>>a;
    if(a%5==0){
        cout<<a/5<<"\n";
    }
    else{
        cout<<(a/5)+1<<"\n";
    }
    
}
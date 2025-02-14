#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    int num;
    int k;
    cin>>num>>k;
    for(int i=0; i<k; i++){
        if(num%10 != 0){
        num = num - 1;
        }
        else{
            num = num/10;
        }
    }
    cout<<num<<'\n';
    
    
}
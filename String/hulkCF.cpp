#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    int n;
    cin>>n;
    cout<<"I hate";
    for(int i = 2;i<=n;i++){
        cout<< (i%2==0? " that I love" : " that I hate ");
    }
    cout<<" it";
    
}
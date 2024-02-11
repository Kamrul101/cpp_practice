#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    vector<string> v;
    int n;
    int count = 0;
    cin>>n;
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        if(a=="X++" || a=="++X"){
            count++;
        }
        else count--;
    }
    
    cout<<count<<"\n";

    
}
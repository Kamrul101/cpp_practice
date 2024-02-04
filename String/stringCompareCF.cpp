#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
    optimize();
    string a,b;
    cin>>a>>b;
    int i=0,j=0;
    transform(a.begin(), a.end(),a.begin(),::tolower);
    transform(b.begin(), b.end(),b.begin(),::tolower);
    while(a[i]!='\0' && b[j]!='\0'){
        if(a[i]!=b[j]){
            break;
        }
        i++;
        j++;
    }
    if(a[i]<b[j]){
        cout<<"-1\n";
    }
    else if(a[i]>b[j]){
        cout<<"1\n";
    }
    else{
        cout<<"0\n";
    }
}
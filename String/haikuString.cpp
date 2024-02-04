#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    int t;
    int a[] = {5,7,5};
    vector <string> v;
    
    for(int i = 0; i<3;i++){
    string s;
        char c;
        cin>>c;
        getline(cin,s);
        s = c + s;
        v.push_back(s);
    }
    for(int i = 0; i<3;i++){
        int count=0;
        for(auto u : v[i]){
            if(u=='a' || u=='e' || u =='i' || u=='o' || u=='u'){
            count++;
        }
        }
        
        if(count !=a[i]){
            return cout<<"NO\n",0;
        }

    }
    cout<<"YES\n";
}
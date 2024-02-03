#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    int s =0, d =0;
    int turn = 1;
    cin>>n;
    vector <int> v(n);
    for(int i=0; i<v.size(); i++){
        cin>>v[i];
    }
    while(!v.empty()){
        if(turn == 1 ){
            if(v[0]<v.back()){
                s+=v.back();
                
                v.pop_back();
            }
            else {
                s+= v[0];
                v.erase(v.begin());

            }
            turn++;
        }
        else{
            if(v[0]<v.back()){
                d+=v.back();
                
                v.pop_back();
            }
            else {
                d+= v[0];
                v.erase(v.begin());

            }
            turn--;
        }
    }
    cout<<s<<" "<<d<<endl;
}
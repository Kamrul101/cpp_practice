#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
// const int mx =2e5+123;
// int a[mx];
int main() {
    optimize();


        int n;
        cin>>n;
        queue<int> enter,exit;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            enter.push(x);
        }
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            exit.push(x);
        }
        vector<int> ans;
        while(1){
            if(!enter.empty() && !exit.empty()){
                int ex = exit.front();
                int en = enter.front();
                if(ex!=en){
                    if(mp.find(ex)==mp.end()){
                        if(mp.find(en)==mp.end()){
                            mp[ex]++;
                            
                            ans.push_back(ex);
                            exit.pop();
                        }
                        else{
                            enter.pop();
                        }
                    }
                    else{
                        enter.pop();
                    }
                }
                else{
                    exit.pop();
                    enter.pop();
                }
            }
            else break;
        }
        cout<<ans.size()<<endl;
        
    
    
}
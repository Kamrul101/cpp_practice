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

    vector<string> convert(string s, int rows) {
        vector<string> v;
        int n = s.size(), wordCnt = 0;
        string result;
        for (int i = 0; i < n;) {
            wordCnt++;
            string chunk;
            if(wordCnt%2==0){ 
                chunk+=' '; 
                chunk += s.substr(i, rows-2);
                chunk+=' ';
                if(chunk.size()<rows){
                    for(int i=chunk.size();i<rows;i++){
                        chunk+=' ';
                    }
                }
                reverse(chunk.begin(),chunk.end());
                i+=rows-2;
            }
            else{
                chunk = s.substr(i, rows);
                i+=rows;
            } 
            result += chunk;
            v.push_back(chunk);
        }
        n = v.size();
        string temp = v.back();
        if(temp.size()!=rows){
            for(int i=temp.size();i<rows;i++){
                temp+=' ';
            }
        }
        v.pop_back();
        v.push_back(temp);
        // int j=0;
        // temp.clear();
        // while(j<rows){
        //     for(auto u:v){
        //         if(u[j]!=' ') temp+=u[j];
        //     }
        //     j++;

        // }
        return v;
        
    }
int main() {
    optimize();
    string s;
    cin>>s;
    vector<string> ans = convert(s,4);
    for(auto u:ans){
        cout<<u<<endl;
    }
    // cout<<ans.back().size()<<endl;
    
}
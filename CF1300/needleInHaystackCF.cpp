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
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        vector<int>mp1(26,0),mp2(26,0);

        for(auto u:s1) mp1[u-'a']++;
        for(auto u:s2) mp2[u-'a']++;

        bool check = true;
        for(int i=0;i<26;i++){
            if(mp1[i]>mp2[i]){
                check = false;
                break;
            }
        }
        if(!check) {
            cout<<"Impossible"<<endl;
            continue;
        }
        string temp;
        for(int i=0;i<26;i++){
            for(int j=1;j<=(mp2[i]-mp1[i]);j++){
                temp+= i+'a';
            }
        }
        string ans;

        int n = temp.size(),m = s1.size();
        int i=0,j=0;
        for(i=0,j=0;i<n && j<m;){
            if(temp[i]<s1[j]){
                ans+=temp[i];
                i++;
            }
            else{
                ans+=s1[j];
                j++;
            }
        }
        
            while(i<n){
                ans+=temp[i];
                i++;
            }
        
       
            while(j<m){
                ans+=s1[j];
                j++;
            }
        
        cout<<ans<<endl;
    }
    
}
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



string maximumFrequency(string s);

int main()
{
    int t;cin>>t;
    cin.ignore();

    for(int i=0;i<t;i++)
    {

        string s;
        getline(cin,s);
        
        
        cout << maximumFrequency(s) << endl;

    }
    return 0;
}

// } Driver Code Ends


string maximumFrequency(string s){
        vector<string> v;
        string temp;
        for(auto u:s){
            if(isspace(u)){
                v.push_back(temp);
                temp.clear();
            }
            else temp+=u;
        }
        v.push_back(temp);
        map<string,int>m;
            int mxFreq = 0;
        for(auto u:v){
            m[u]++;
            mxFreq = max (mxFreq, m[u]);
        }
        string ans;
        for(auto u:v){
            if(m[u]==mxFreq){
                ans = u;
                break;
            }
        }
        ans = ans + " "+ to_string(mxFreq);
        return ans;

}

